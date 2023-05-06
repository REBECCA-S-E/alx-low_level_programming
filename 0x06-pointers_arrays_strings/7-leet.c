#include "main.h"

/**
 * *leet - Encodes a string into 1337
 * @r: sting input
 * Return: the value of r
 */
char *leet(char *r)
{
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int i, j;

	for (i = 0; r[i]; != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (r[i] == s1[j])
			{
				r[i] = s2[j];
			}
		}
	}
	return (r);
}
