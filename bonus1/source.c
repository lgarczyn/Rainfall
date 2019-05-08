#include <stdlib.h>

char		*ds0;

int			main(int argc, char **argv)
{
	int		i = atoi(argv[1]);
	char	buffer[80];

	if (i > 9)
		return (1);
	
	int ecx = i * 4;

	memcpy(buffer, argv[2], ecx);

	if (i != 0x574F4C46)
		return (0);
	
	system("/bin/sh");
}
