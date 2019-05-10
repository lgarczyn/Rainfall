#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int			language = 0;

void		greetuser(char *display, int size)
{
	char	buffer[0x58];
	char	*greeting;

	if (language == 1)
		greeting = "Hyvää päivää ";
	else if (language == 2)
		greeting = "Goedemiddag! ";
	else if (language == 0)
		greeting = "Hello ";
	strcat(display, greeting);
	puts(display);
}

int			main(int argc, char **argv)
{
	char	display[0x28];
	char	arg1[0x20];

	if (argc != 3)
		return (1);
	
	memset(display, 0, 0x13);
	strncpy(display, argv[2], 0x28);
	strncpy(arg1, argv[1], 0x20);
	
	char *env_lang = getenv("LANG");

	if (strncmp(env_lang, "fi", 2) == 0)
		language = 1;
	else if (strncmp(env_lang, "nl", 2) == 0)
		language = 2;

	greetuser(display, 0x13);
}