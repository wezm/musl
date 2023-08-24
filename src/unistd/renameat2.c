#include <stdio.h>
#include "syscall.h"

int renameat2(int oldfd, const char *old, int newfd, const char *new, unsigned int flags)
{
#ifdef SYS_renameat2
	return syscall(SYS_renameat2, oldfd, old, newfd, new, flags);
#else
	return ENOSYS;
#endif
}
