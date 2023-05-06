#include <stdio.h>
#include "main.h"

/**
 * *rot13 - encodes a string
 * @s: string to encode
 * Return: value of s
 */
char *rot13(char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		{
			c += 13;
		}
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		{
			c -= 13;
		}
		s[i] = c;
	}

	return (s);
}

