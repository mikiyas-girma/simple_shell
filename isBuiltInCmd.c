#include "cshell.h"

/**
 * isBuiltInCmd - built in cmd
 * @buff: input entered from a user
 * @argv: argument
 *
 *Return: 0
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
		if (argv[1] == NULL)
			chdir(findEnvVar("HOME"));
		else
			chdir(argv[1]);
		return (1);
	}
	else if (my_strcmp(argv[0], "envr") == 0)
	{
		envVar();
		return (1);
	}
	return (0);
}
