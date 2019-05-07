#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int			g = 0;
int			g2 = 0;

int			m(void)
{
	int time_val = time(NULL);
	return (printf("%s - %d\n", (char*)&g, time_val));
}

int			main(int argc, char **argv)
{
	int	*mem = malloc(8);
	*mem = 1;
	int	*mem2 = malloc(8);
	int	*str = (int*)((int)mem + 4);
	*str = (int)mem2;
	int	*mem3 = malloc(8);
	*mem3 = 2;
	int	*mem4 = malloc(8);
	int	*str2 = (int*)((int)mem3 + 4);
	*str2 = (int)mem4;
	strcpy((char*)*str, (char*)*(int*)(argc+4));
	strcpy((char*)*str2, (char*)*(int*)(argc+8));
	fopen("/home/user/level8/.pass", "r");
	FILE *file = fgets((char*)&g2, 68, file);
	puts("~~");
	return (0);
}
