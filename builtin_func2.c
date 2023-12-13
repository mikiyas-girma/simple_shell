#include "cshell.h"

/**
 * my_strchr - returns a string
 * @st: a string to be returned
 * @q: delimiter
 * Return: the string
 */
char *my_strchr(const char *st, int q)
{
	while (*st != '\0' && *st != q)
	{
		st++;
	}

	return ((*st == q || q == '\0') ? (char *)st : NULL);
}

/**
 * my_strncmp - compares n amounts of strings
 * @st1: variable 1
 * @st2: variable 2
 * @n: number of characters to compare
 *
 * Return: 0
 */
int my_strncmp(const char *st1, const char *st2, size_t n)
{
	size_t j;
	for (j = 0; j < n; ++j)
	{
		if (st1[j] != st2[j] || st1[j] == '\0')
		{
			return ((int)(unsigned char)st1[j] - (int)(unsigned char)st2[j]);
		}
	}

	return (0);
}
