#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Locates a character in a string
 * @s: first character
 * @c: second character
 * Return: ALways 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
