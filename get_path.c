#include "cshell.h"

/**
 * find_path -  function that points to a location of a path
 * @loc: location of the path
 * @argv: the argument vector
 * @av: av
 * @mod: its behav
 * @ctr: counter of arguments
 * Return: NULL of finished its task
 */

char *find_path(char *loc, char *argv, char *av, int mod, int ctr)
{
    char *tmp = my_strdup(loc);
    if (tmp == NULL)
        return NULL;

    char *delim = ":";
    char *tok = my_strtok(tmp, delim);

    while (tok != NULL)
    {
        char *move = (char *)malloc(my_strlen(tok) + my_strlen(argv) + 3);
        if (move == NULL)
        {
            free(tmp);
            return NULL;
        }

        my_strcpy(move, tok);
        my_strcat(move, "/");
        my_strcat(move, argv);

        if (access(move, X_OK) == 0)
        {
            free(tmp);
            return move;
        }

        free(move);
        tok = my_strtok(NULL, delim);
    }

    free(tmp);
    return NULL;
}

