
#ifndef CANVAS_MEMORY_H
#define CANVAS_MEMORY_H

#include <dirent.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Proc.h"
using namespace std;

typedef unsigned int kaddr;

typedef unsigned char uint8;
typedef unsigned short int uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;

typedef signed char int8;
typedef signed short int int16;
typedef signed int int32;
typedef signed long long int64;

typedef char ANSICHAR;
typedef wchar_t WIDECHAR;
typedef uint8 CHAR8;
typedef uint16 CHAR16;
typedef uint32 CHAR32;
typedef WIDECHAR TCHAR;

static kaddr libbase = 0;


pid_t find_pid(const char *process_name)
{
	int id;
	pid_t pid = -1;
	DIR *dir;
	FILE *fp;
	char filename[128];
	char cmdline[256];

	struct dirent *entry;
	if (process_name == NULL)
	{
		return -1;
	}
	dir = opendir("/proc");
	if (dir == NULL)
	{
		return -1;
	}
	while ((entry = readdir(dir)) != NULL)
	{

		sscanf(entry->d_name, "%d", &id);

		if (id != 0)
		{
			sprintf(filename, "/proc/%d/cmdline", id);
			fp = fopen(filename, "r");
			if (fp)
			{
				fgets(cmdline, sizeof(cmdline), fp);
				fclose(fp);

				if (strcmp(process_name, cmdline) == 0)
				{
			    /* process found */
					pid = id;
					break;
				}
			}
		}
	}

	closedir(dir);
	return pid;
}

int isapkrunning(const char *bm)
{
	DIR *dir = NULL;
	struct dirent *ptr = NULL;
	FILE *fp = NULL;
	char filepath[50];
	char filetext[128];
	dir = opendir("/proc/");
	if (dir != NULL)
	{
		while ((ptr = readdir(dir)) != NULL)
		{
			if ((strcmp(ptr->d_name, ".") == 0) || (strcmp(ptr->d_name, "..") == 0))
				continue;
			if (ptr->d_type != DT_DIR)
				continue;
			sprintf(filepath, "/proc/%s/cmdline", ptr->d_name);
			fp = fopen(filepath, "r");
			if (NULL != fp)
			{
				fgets(filetext, sizeof(filetext), fp);
				if (strcmp(filetext, bm) == 0)
				{
					closedir(dir);
					return 1;
				}
				fclose(fp);
			}
		}
	}
	closedir(dir);
	return 0;
}
int isApkRunning(const char *pkg_name){
    if (find_pid(pkg_name) != 0 && find_pid(pkg_name) > 0){
        return 1;
    }
    return 0;
}
void Running()
{
	if (isApkRunning("com.tencent.ig") == 1)
	{
		target_pid2 = find_pid("com.tencent.ig");
		LOGI("PUBGM Global version is runnning");
	}
	else if (isApkRunning("com.vng.pubgmobile") == 1)
	{
		target_pid2 = find_pid("com.vng.pubgmobile");
		LOGI("PUBGM Vietnam version is runnning");
	}
	else if (isApkRunning("com.pubg.krmobile") == 1)
	{
		target_pid2 = find_pid("com.pubg.krmobile");
		LOGI("PUBGM Korea version is runnning");
	}
	else if (isApkRunning("com.rekoo.pubgm") == 1)
	{
		target_pid2 = find_pid("com.rekoo.pubgm");
		LOGI("PUBGM Taiwan version is runnning");
	}
	else if (isApkRunning("com.pubg.imobile") == 1)
	{
		target_pid2 = find_pid("com.pubg.imobile");
		LOGI("PUBGM Idiot version is runnning");
	}
	else
	{
		LOGE("Can't get game pid!");
		return;
	}
}
int ReadTM(kaddr addr)
{
	int *data = (int *)malloc(4);
	vm_readv(reinterpret_cast < void *>(addr), data, 4);

	int paddr = *(int *)data;
	return paddr;
	free(data);
}


#define SIZE sizeof(kaddr)

kaddr getRealOffset(kaddr offset)
{
	if (libbase == 0)
	{
		//LOGW("\nError: Can't Find Base Addr for Real Offset\n");
		return 0;
	}
	return (libbase + offset);
}

template < typename T > T Read2(kaddr address)
{
	T data;
	vm_readv(reinterpret_cast < void *>(address), reinterpret_cast < void *>(&data), sizeof(T));
	return data;
}

template < typename T > void Write2(kaddr address, T data)
{
	vm_writev(reinterpret_cast < void *>(address), reinterpret_cast < void *>(&data), sizeof(T));
}

template < typename T > T * ReadArr(kaddr address, unsigned int size)
{
	T data[size];
	T *ptr = data;
	vm_readv(reinterpret_cast < void *>(address), reinterpret_cast < void *>(ptr),
			 (sizeof(T) * size));
	return ptr;
}

char *ReadStr(kaddr address, unsigned int size)
{
	char *data = new char[size];
	for (int i = 0; i < size; i++)
	{
		vm_readv(reinterpret_cast < void *>(address + (sizeof(char) * i)),
				 reinterpret_cast < void *>(data + i), sizeof(char));
		if (data[i] == '\0')
		{
			break;
		}
	}
	return data;
	delete data;
}

#define SIZE sizeof(kaddr)
int isValid32(kaddr addr)
{
	if (addr < 0x10000000 || addr > 0xefffffff || addr % SIZE != 0)
		return 0;
	return 1;
}

kaddr getPtr(kaddr address)
{
	return Read2 < kaddr > (address);
}

#endif // CANVAS_MEMORY_H

