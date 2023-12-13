#include "cshell.h"
/**
 * isComment - checks whether the input is a comment
 * @st: input string
 */
void isComment(char *st)
{
	int i;

	if (!st)
		return;
	i = 0;

	while (st[i])
	{
		if (st[i] == '#' && (i == 0 || st[i - 1] != ' '))
			break;

		if (st[i] == '#')
			st[i] = '\0';

		i++;
	}
}

/**
 * my_strtok - uses for tokenizing given string
 * @st: given string
 * @delim: to be used a separator
 *
 * Return: each tokens separated by delim
 */
char *my_strtok(char *st, const char *delim)
{
	static char *end;
	char *tok;

	if (st != NULL)
		end = st;

	if (end == NULL)
		return (NULL);

	while (*end != '\0' && my_strchr(delim, *end) != NULL)
		end++;

	if (*end == '\0')
		return (NULL);

	tok = end;

	while (*end != '\0' && my_strchr(delim, *end) == NULL)
		end++;

	if (*end != '\0')
		*end++ = '\0';
	else
		end = NULL;

	return (tok);
}
