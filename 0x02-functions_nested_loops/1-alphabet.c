#include "main.h"

/**
 * print_alphabet - prints the alpha in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
	}

	_putchar('\n');
}
