#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		n()
{
	system("/bin/sh");
	return (0);
}

int		m()
{
	puts("Nope");
	return (0);
}

int		main(int argc, char **argv)
{
	char *mem = malloc(64);
	char *mem2 = malloc(4);
	*mem2 = 0x8048468;
	strcpy(mem, (char*)(argv + 4));
	return (*mem2);
}
