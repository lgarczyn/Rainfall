#include <stdlib.h>
#include <string.h>

int			language = 0;

void		greetuser(char *user)
{
	char	*greeting;

	// More weird stuff for each language
	if (language == 1)
		greeting = "Hyvää päivää ";
	else if (language == 2)
		greeting = "Goedemiddag! ";
	else if (language == 0)
		greeting = "Hello ";
	strcat(user, greeting);
	puts(user);
}

int			main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	
	//weird arg strncpy
	
	char *language = getenv("LANG");

	if (strncmp(language, "fi", 2) == 0)
		language = 1;
	else if (strncmp(language, "nl", 2) == 0)
		language = 2;

	//more weird string manipulation
	greetuser(argv[1]);
}