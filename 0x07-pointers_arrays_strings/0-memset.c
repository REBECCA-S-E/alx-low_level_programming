#include "main.h"

/**
 * _memset - Fills the memory with a constant byte
 * @s: the first memory to be filled
 * @b: the second memory to be filled
 * @n: the third memory to be filled
 *
 * Return: new value for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
