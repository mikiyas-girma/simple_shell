#include "cshell.h"

/**
 * main - entry point to the program
 * @ac: argument counter
 * @av: vector arguments
 * @envr: environments
 *
 * Return: after successful operation returns 0
 */
int main(int ac, char **av, char **envr)
{
	(void)ac;

	repeat(av, envr);


	return (0);
}

