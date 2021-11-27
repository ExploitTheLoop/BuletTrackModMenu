#include "Includes.h"
#include "Tools.h"
#include "fake_dlfcn.h"
// ============================================================================================= //
#define DefineHook(RET, NAME, ARGS) \
    RET (*Orig_ ## NAME) ARGS; \
    RET Hook_ ## NAME ARGS

#define HookRuntimeAPI(LIB, NAME) \
    LOGI("Hooking API: %s:%s (%p)", # LIB, # NAME, dlsym(dlopen(# LIB, 4), # NAME)); \
    Tools::Hook((void *) dlsym(dlopen(# LIB, 4), # NAME), (void *) &Hook_ ## NAME, (void **) &Orig_ ## NAME)
// ============================================================================================= //
char szPkgName[64];
const char *namesToHide[] = {"libnino.so", "libitsuki.so"};

#define ORIG_DATA_GL "cert_md5=e2aea8c8c0ff6adbe7895cb6d1ed53c0|apk_hash_1=|apk_hash_2=|txt_seg_crc="
#define ORIG_DATA_KR "cert_md5=0ae1ab90d49d0392a550c8492b322612|apk_hash_1=|apk_hash_2=|txt_seg_crc="
#define ORIG_DATA_TW "cert_md5=646171d5e7801a691df5ca3b17dc3906|apk_hash_1=|apk_hash_2=|txt_seg_crc="
#define ORIG_DATA_VN "cert_md5=4dd0f3506ce6a56c20ce24b38973299c|apk_hash_1=|apk_hash_2=|txt_seg_crc="
#define ORIG_DATA_IN "cert_md5=7073b19e4dac8e00685530b43732f0db|apk_hash_1=|apk_hash_2=|txt_seg_crc="

const char *isNameInBlackList(const char *in) {
    if (!in)
        return 0;

    for (int i = 0; i < (sizeof(namesToHide) / sizeof(namesToHide[0])); i++) {
        const char *found = strstr(in, namesToHide[i]);
        if (found) {
            return found;
        }
    }
    return 0;
}
// ============================================================================================= //
DefineHook(int, open, (const char *pathname, int flags, mode_t mode, void *unk1, void *unk2, void *unk3)) {
    if (isNameInBlackList(pathname)) {
        return -1;
    }

    if (strstr(pathname, szPkgName)) {
        if (strstr(pathname, ".apk")) {
            std::string s = "/data/data/";
            s += szPkgName;
            s += "/cache/base.apk";
            pathname = s.c_str();
        }
    }

    return Orig_open(pathname, flags, mode, unk1, unk2, unk3);
}

DefineHook(int, creat, (const char *pathname, int flags)) {
    if (isNameInBlackList(pathname)) {
        return -1;
    }

    if (strstr(pathname, szPkgName)) {
        if (strstr(pathname, ".apk")) {
            std::string s = "/data/data/";
            s += szPkgName;
            s += "/cache/base.apk";
            pathname = s.c_str();
        }
    }

    return Orig_creat(pathname, flags);
}
// ============================================================================================= //
DefineHook(FILE *, fopen, (const char* pathname, const char* mode)) {
    if (isNameInBlackList(pathname)) {
        return 0;
    }

    if (strstr(pathname, szPkgName)) {
        if (strstr(pathname, ".apk")) {
            std::string s = "/data/data/";
            s += szPkgName;
            s += "/cache/base.apk";
            pathname = s.c_str();
        }
    }

    return Orig_fopen(pathname, mode);
}
// ============================================================================================= //
DefineHook(ssize_t, read, (int fd, void * buf, size_t count)) {
    auto result = Orig_read(fd, buf, count);

    if (result > 0) {
        uint8_t *buff = (uint8_t *) buf;
        for (int i = 0; i < result; i++) {
            for (int j = 0; j < (sizeof(namesToHide) / sizeof(namesToHide[0])); j++) {
                auto name = namesToHide[j];
                if (i <= (result - strlen(name))) {
                    if (memcmp(&buff[i], name, strlen(name)) == 0) {
                        memset(&buff[i], '.', strlen(name));
                    }
                }
            }
        }
    }
    return result;
}
// ============================================================================================= //
DefineHook(size_t, fread, (void * ptr, size_t size, size_t nmemb, FILE * stream)) {
    auto result = Orig_fread(ptr, size, nmemb, stream);

    if (result > 0) {
        uint8_t *buff = (uint8_t *) ptr;
        for (int i = 0; i < result; i++) {
            for (int j = 0; j < (sizeof(namesToHide) / sizeof(namesToHide[0])); j++) {
                auto name = namesToHide[j];
                if (i <= (result - strlen(name))) {
                    if (memcmp(&buff[i], name, strlen(name)) == 0) {
                        memset(&buff[i], '.', strlen(name));
                    }
                }
            }
        }
    }

    return result;
}
// ============================================================================================= //
DefineHook(int, access, (const char *pathname, int mode)) {
    if (isNameInBlackList(pathname)) {
        return -1;
    }
    return Orig_access(pathname, mode);
}
// ============================================================================================= //
DefineHook(int, stat, (const char *pathname, struct stat *statbuf)) {
    if (isNameInBlackList(pathname)) {
        return -1;
    }
    return Orig_stat(pathname, statbuf);
}

DefineHook(int, lstat, (const char *pathname, struct stat *statbuf)) {
    if (isNameInBlackList(pathname)) {
        return -1;
    }
    return Orig_lstat(pathname, statbuf);
}
// ============================================================================================= //
DefineHook(char *, fgets, (char * dest, int size, FILE * stream)) {
    auto ret = Orig_fgets(dest, size, stream);
    check:
    if (ret) {
        if (isNameInBlackList(ret)) {
            ret = Orig_fgets(dest, size, stream);
            goto check;
        }
    }

    return ret;
}
// ============================================================================================= //
DefineHook(DIR *, opendir, (const char *name)) {
    if (isNameInBlackList(name)) {
        return 0;
    }
    return Orig_opendir(name);
}

DefineHook(struct dirent *, readdir, (DIR * dirp)) {
    auto ret = Orig_readdir(dirp);
    check:
    if (ret) {
        if (isNameInBlackList(ret->d_name)) {
            ret = Orig_readdir(dirp);
            goto check;
        }
    }
    return ret;
}

// ============================================================================================= //
DefineHook(int, sprintf, (char * str, const char *format, ...)) {
    va_list args;
    va_start (args, format);
    int result = vsprintf(str, format, args);

    va_end(args);
    return result;
}

DefineHook(int, snprintf, (char * str, size_t size, const char *format, ...)) {
    va_list args;
    va_start (args, format);
    int result = vsnprintf(str, size, format, args);

    if (!strncmp(str, "cert_md5", 8)) {
        LOGI("%s", str);
        if (!strcmp(szPkgName, "com.tencent.ig")) {
            str = (char *) ORIG_DATA_GL;
        }
        if (!strcmp(szPkgName, "com.pubg.krmobile")) {
            str = (char *) ORIG_DATA_KR;
        }
        if (!strcmp(szPkgName, "com.rekoo.pubgm")) {
            str = (char *) ORIG_DATA_TW;
        }
        if (!strcmp(szPkgName, "com.vng.pubgmobile")) {
            str = (char *) ORIG_DATA_VN;
        }
        if (!strcmp(szPkgName, "com.pubg.imobile")) {
            str = (char *) ORIG_DATA_IN;
        }
    }

    va_end(args);
    return result;
}
// ============================================================================================= //
DefineHook(int, syscall_wrapper, (int a1, int a2, void *a3, void *a4)) {
    if (a1 == 5 || a1 == 8 || a1 == 15 || a1 == 33 || a1 == 106 || a1 == 107 || a1 == 195 || a1 == 196) {
        const char *str = (const char *) a2;
        if (isNameInBlackList(str)) {
            return -1;
        }

        if (strstr(str, szPkgName)) {
            if (strstr(str, ".apk")) {
                std::string s = "/data/data/";
                s += szPkgName;
                s += "/cache/base.apk";
                a2 = (int) s.c_str();
            }
        }
    }
    return Orig_syscall_wrapper(a1, a2, a3, a4);
}

void *tersafe_hook(void *) {
    auto tersafe = Tools::GetBaseAddress("libtersafe.so");
    while (!tersafe) {
        tersafe = Tools::GetBaseAddress("libtersafe.so");
    }

    auto syscall_wrapper_offset = Tools::FindPattern("libtersafe.so", "00 00 A0 E1 0D C0 A0 E1");
    LOGI("libtersafe.so syscall_wrapper: %p", syscall_wrapper_offset);
    Tools::Hook((void *) (syscall_wrapper_offset), (void *) (Hook_syscall_wrapper), (void **) (&Orig_syscall_wrapper));
    return 0;
}

// ============================================================================================= //
void StartRuntimeHook(const char *gamePkg) {
    LOGI("Starting Runtime Hook on %s", gamePkg);
    strcpy(szPkgName, gamePkg);

    HookRuntimeAPI(libc.so, open);
    //HookRuntimeAPI(libc.so, creat);
    HookRuntimeAPI(libc.so, read);
    //HookRuntimeAPI(libc.so, access);

    //HookRuntimeAPI(libc.so, stat);
    //HookRuntimeAPI(libc.so, lstat);

    HookRuntimeAPI(libc.so, fopen);
    HookRuntimeAPI(libc.so, fread);
    HookRuntimeAPI(libc.so, fgets);

    //HookRuntimeAPI(libc.so, opendir);
    //HookRuntimeAPI(libc.so, readdir);

    HookRuntimeAPI(libc.so, sprintf);
    HookRuntimeAPI(libc.so, snprintf);

    pthread_t t;
    //pthread_create(&t, 0, tersafe_hook, 0);
}

