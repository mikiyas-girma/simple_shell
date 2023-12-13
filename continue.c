#include "cshell.h"
/**
 * repeat -  used to display prompt repeatedly
 * @envr: environment variable
 * @av: program name
 */
void repeat(char **av, char **envr)
{
	char *loc, *buff = NULL, *argv[ARG_MAX];
	size_t buff_size = 0;
	int ans, mod = isatty(STDIN_FILENO), ctr = 0;
	const char *delim = " \t\n\r";

	while (1)
	{
		if (mod)
			write(STDOUT_FILENO, ">> ", 3);

		ans = getline(&buff, &buff_size, stdin);
		if (ans == -1)
		{
			if (mod)
				write(STDOUT_FILENO, "\n", 1);
			free(buff);
			exit(EXIT_SUCCESS);
		}
		isComment(buff);
		buff[ans - 1] = '\0';
		ctr++;
		tokenize(buff, argv, delim);
		if (argv[0] == NULL)
		{continue; }
		if (isBuiltInCmd(buff, argv) != 0)
		{fr_argv(argv);
			continue; }
		else
		{
			loc = find_loc(argv[0], av[0], mod, ctr);
			if (loc == NULL)
			{print_err(av[0], ctr, argv[0]);
				fr_argv(argv);
				continue; }
			exec_cmd(av, loc, argv, envr);
		}
		fr_argv(argv);
		free(loc);
	}
}

/**
 * my_strlen - used to know string length
 * @st: input string
 * Return: number of the character
 */
size_t my_strlen(const char *st)
{
	size_t q;
	if (!st)
		return (0);
	q = 0;

	while (*st++)
		q++;
	return (q);
}
