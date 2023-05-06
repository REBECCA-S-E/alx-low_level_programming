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
		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
		{
			for (i = 0; i < 13; i++)
			{
				if ((*p >= 'a' && *p < 'z') || (*p >= 'A' && *p < 'Z'))
				{
					(*p)++;
				}
				else if (*p == 'z')
				{
					*p = 'a';
				}
				else if (*p == 'Z')
				{
					*p = 'A';
				}
			}
		}
		p++;
	}
	return (s);
}
