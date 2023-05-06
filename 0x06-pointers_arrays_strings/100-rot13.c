#include <stdio.h>
#include "main.h"

/**
 * *rot13 - encodes a string
 * @s: string to encode
 * Return: value of s
 */
char *rot13(char *s)
{
	char *p = s;
	int i;

	while (*p != '\0')
	{
		if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
		{
			*p += 13;
		}
		else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
		{
			*p -= 13;
		}
		p++;
	}

	return (s);
}
