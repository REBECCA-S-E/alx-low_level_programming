#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the strring
 * @dest: the first string to be coppied
 * @src: the second string to be copied
 * Return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = ('\0');
	return (dest);
}
