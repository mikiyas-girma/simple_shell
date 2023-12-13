#include "cshell.h"

/**
 * tokenize - parses input arguments
 * @buff: input accepted from the user
 * @argv: argument
 * @delim: delimiter
 */
void tokenize(char *buff, char **argv, const char *delim)
{
	int ac = 0;

	for (char *tok = my_strtok(buff, delim); tok != NULL && ac < ARG_MAX - 1;
	tok = my_strtok(NULL, delim))
	{
		argv[ac++] = my_strdup(tok);
	}

	argv[ac] = NULL;
}
