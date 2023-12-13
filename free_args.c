#include "cshell.h"

/**
 * fr_argv - frees the argument vector
 * @argv: argument vector
 */
void fr_argv(char **argv)
{
	int x;
	for (x = 0; argv[x] != NULL; x++)
	{
		free(argv[x]);
	}
}
