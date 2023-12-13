#include "cshell.h"

/**
 * isComment - checks whether the input is a comment
 * @st: input string
 */
void isComment(char *st)
{
    if (!st)
        return;

    int i = 0;

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
#include <stddef.h>

char *my_strtok(char *st, const char *delim)
{
    static char *end;

    if (st != NULL)
        end = st;

    if (end == NULL)
        return NULL;

    // Skip leading delimiters
    while (*end != '\0' && my_strchr(delim, *end) != NULL)
        end++;

    // If at the end of the string, return NULL
    if (*end == '\0')
        return NULL;

    char *tok = end;

    // Find the end of the token
    while (*end != '\0' && my_strchr(delim, *end) == NULL)
        end++;

    // Null-terminate the token
    if (*end != '\0')
        *end++ = '\0';
    else
        end = NULL;

    return tok;
}

