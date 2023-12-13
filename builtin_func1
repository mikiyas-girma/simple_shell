#include "cshell.h"

/**
 * my_strcat - concatenates two strings
 * @st1: pointer to the first string
 * @st2: pointer to the second string
 *
 * Return: concatenated string
 */
char *my_strcat(char *st1, char *st2)
{
    char *pr = st1 + my_strlen(st1);

    while ((*pr++ = *st2++))
    {

    }

    return st1;
}

/**
 * my_strdup - duplicates a string
 * @st: given string
 *
 * Return: duplicated string
 */
char *my_strdup(const char *st)
{
    if (st == NULL)
        return NULL;

    size_t sz = my_strlen(st);
    char *dpl = (char *)malloc(sz + 1);

    if (dpl != NULL)
        my_strcpy(dpl, st);

    return dpl;
}
