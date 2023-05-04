#include "main.h"

/**
 * puts2 - prints every other character of a string, start with the first
 * @str: the string to print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
