#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char to be printed
 * Return: 1 on success
 * on error, -1 is retuerned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
