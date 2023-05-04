#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: strings to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
