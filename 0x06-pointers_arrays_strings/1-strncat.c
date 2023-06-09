#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of bytes to be used from source string
 *
 * Return: Pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

