
#ifndef CANVAS_PROCESS_H
#define CANVAS_PROCESS_H

#include <sys/syscall.h>
#include <unistd.h>
#include <sys/uio.h>

pid_t target_pid2 = -1;

#if defined(__arm__)
int process_vm_readv_syscall = 376;
int process_vm_writev_syscall = 377;
#elif defined(__aarch64__)
int process_vm_readv_syscall = 270;
int process_vm_writev_syscall = 271;
#elif defined(__i386__)
int process_vm_readv_syscall = 347;
int process_vm_writev_syscall = 348;
#else
int process_vm_readv_syscall = 310;
int process_vm_writev_syscall = 311;
#endif

typedef unsigned int kaddr;
ssize_t process_v3(pid_t __pid, const struct iovec* __local_iov, unsigned long __local_iov_count,
	const struct iovec* __remote_iov, unsigned long __remote_iov_count, unsigned long __flags, bool iswrite) {
	return syscall((iswrite ? process_vm_writev_syscall : process_vm_readv_syscall), __pid, __local_iov, __local_iov_count, __remote_iov, __remote_iov_count, __flags);
}
bool pvm1(void* address, void* buffer, size_t size, bool iswrite) {
    struct iovec local[1];
    struct iovec remote[1];

    local[0].iov_base = buffer;
    local[0].iov_len = size;
    remote[0].iov_base = address;
    remote[0].iov_len = size;

    if (target_pid2 < 0) {
        return false;
    }

    ssize_t bytes = process_v3(target_pid2, local, 1, remote, 1, 0, iswrite);
    return bytes == size;
}
ssize_t process_v2(pid_t __pid,   struct iovec* __local_iov, unsigned long __local_iov_count, struct iovec* __remote_iov, unsigned long __remote_iov_count, unsigned long __flags) {
    return syscall(process_vm_readv_syscall, __pid, __local_iov, __local_iov_count, __remote_iov, __remote_iov_count, __flags);
}
int pvm(kaddr address, void* buffer,int size) {
    struct iovec local[1];
    struct iovec remote[1];

    local[0].iov_base = (void*)buffer;
    local[0].iov_len = size;
    remote[0].iov_base = (void*)address;
    remote[0].iov_len = size;
if (target_pid2 < 0) {
        return false;
    }
ssize_t bytes = process_v2(target_pid2, local, 1, remote, 1, 0);
    return bytes == size;
}
bool vm_readv(void* address, void* buffer, size_t size) {
    return pvm1(address, buffer, size, false);
}

bool vm_writev(void* address, void* buffer, size_t size) {
    return pvm1(address, buffer, size, true);
}
ssize_t process_vm_writev(pid_t __pid,   struct iovec* __local_iov, unsigned long __local_iov_count, struct iovec* __remote_iov, unsigned long __remote_iov_count, unsigned long __flags) {
    return syscall(process_vm_writev_syscall, __pid, __local_iov, __local_iov_count, __remote_iov, __remote_iov_count, __flags);
}
kaddr GetGameBase(int pid)
{
	FILE *fp;
	uintptr_t addr = 0;
	char filename[40], buffer[1024];
	snprintf(filename, sizeof(filename), "/proc/%d/maps", pid);
	fp = fopen(filename, "rt");
	if (fp != NULL)
	{
		while (fgets(buffer, sizeof(buffer), fp))
		{
			if (strstr(buffer, "libUE4.so"))
			{
				addr = (uintptr_t) strtoul(buffer, NULL, 16);
				break;
			}
		}
		fclose(fp);
	}
	return addr;
}
#endif //CANVAS_PROCESS_H
