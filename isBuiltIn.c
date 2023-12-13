#include "cshell.h"

/**
 * isBuiltInCmd - checks a built-in command
 * @buff: input entered by the user
 * @argv: argument
 *
 * Return: 1 if it's, 0 otherwise
 */
int isBuiltInCmd(char *buff, char **argv)
{
	if (my_strcmp(argv[0], "exit") == 0)
	{
		free(buff);
		fr_argv(argv);
		exit(0);
	}
	else if (my_strcmp(argv[0], "cd") == 0)
	{
		chdir((argv[1] == NULL) ? findEnvVar("HOME") : argv[1]);
		return (1);
	}
	else if (my_strcmp(argv[0], "envr") == 0)
	{
		envVar();
		return (1);
	}

	return (0);
}
