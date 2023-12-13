#include "cshell.h"

/**
 * envVar - function that writes PATH's environment variables
 */
void envVar(void)
{
	int x = 0;

	while (environ[x] != NULL)
	{
		write(STDOUT_FILENO, environ[x], my_strlen(environ[x]));
		write(STDOUT_FILENO, "\n", 1);
		x++;
	}
}

/**
 * findEnvVar - finds or gets environment variables
 * @key: The key of the environment variable
 * Return: the value of the key
 */
char *findEnvVar(const char *key)
{
	size_t sz = my_strlen(key);
	char **envrt;

	for (envrt = environ; *envrt != NULL; ++envrt)
	{
		if (my_strncmp(*envrt, key, sz) == 0 && (*envrt)[sz] == '=')
		{
			return (*envrt + sz + 1);
		}
	}
	return (NULL);
}
