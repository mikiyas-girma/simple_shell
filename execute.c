#include "cshell.h"
/**
 * exec_cmd - executes commands given
 * @loc: the location of path
 * @av: av
 * @argv: argument vector
 * @envr: environment variables
 * Return: on success it returns 0
 */

int exec_cmd(char **av, char *loc, char **argv, char **envr)
{
    pid_t pid = fork();

    if (pid < 0)
    {
        perror(av[0]);
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        if (execve(loc, argv, envr) == -1)
        {
            perror(av[0]);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        int stat;
        if (waitpid(pid, &stat, 0) == -1)
        {
            perror(av[0]);
            exit(EXIT_FAILURE);
        }
    }

    return EXIT_SUCCESS;
}


/**
 * my_strcmp - used to compare two strings
 * @st1: first string
 * @st2: string two
 * Return: on success it returns 0
 */
int my_strcmp(const char *st1, const char *st2)
{
    while (*st1 && *st1 == *st2)
    {
        st1++;
        st2++;
    }

    return *(unsigned char *)st1 - *(unsigned char *)st2;
}

