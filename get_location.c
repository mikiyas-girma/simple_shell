#include "cshell.h"

/**
 * find_loc - functions that finds the place of the path
 * @argv: argument vector
 * @mod: argument mode
 * @av: av
 * @ctr: counter
 * Return: returns NULL if success on finding the path
 */
char *find_loc(char *argv, char *av,  int mod, int ctr)
{
	char *location;
	char *full_location;

	if (my_strchr(argv, '/') != NULL)
		return (my_strdup(argv));

	location = findEnvVar("PATH");
	if (location)
	{
		full_location = find_path(location, argv, av, mod, ctr);
		if (full_location == NULL)
			return (NULL);
		return (full_location);
	}
	return (NULL);
}

/**
 * handle_ctrl_c - handles control + c input
 * @flag: incoming signal
 */
void handle_ctrl_c(int flag)
{
	(void)flag;
}
