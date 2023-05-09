#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
