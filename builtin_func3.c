#include "cshell.h"
/**
 * my_strcpy - copies string from src to dest
 * @dest: to which string is copied
 * @src: from which string is copied
 *
 * Return: the the duplicate of the original string
 */
char *my_strcpy(char *dest, const char *src)
{
	char *destination = dest;

	while ((*dest++ = *src++) != '\0');
	return (destination);
}

/**
 * _putchar - custom implementation of putchar builtin
 * @ch: the character used as input
 * Return: inputed character
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
