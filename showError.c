#include "cshell.h"
/**
 * print_err - displays error message
 * @av: program key
 * @x: prompt counter
 * @argv: input from user
 *
 */
void print_err(const char *av, int x, const char *argv)
{
	size_t sz1 = my_strlen(av);
	size_t sz2 = my_strlen(argv);

	write(2, av, sz1);
	write(2, ": ", 2);

	if (x < 10)
	{
		char digit = '0' + x;

		write(2, &digit, 1);
	}
	else if (x < 100)
	{
		char tensDigit = '0' + (x / 10);
		char onesDigit = '0' + (x % 10);

		write(2, &tensDigit, 1);
		write(2, &onesDigit, 1);
	}

	write(2, ": ", 2);
	write(2, argv, sz2);
	write(2, ": not found\n", 12);
}

/**
 * my_strpbrk - custom implementation for strpbrk
 * @st1: first string
 * @st2: second string
 * Return: string
 */

char *my_strpbrk(const char *st1, const char *st2)
{
	while (*st1)
	{
		const char *p = st2;

		while (*p && *p != *st1)
		{
			p++;
		}
		if (*p)
		{
			return ((char *)st1);
		}
		st1++;
	}

	return (NULL);
}
