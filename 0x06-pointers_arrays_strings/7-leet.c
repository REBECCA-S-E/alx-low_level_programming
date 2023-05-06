#include "main.h"

/**
 * *leet - Encodes a string into 1337
 * @r: sting input
 * Return: the value of r
 */
char *leet(char *r)
{
	char *leetspeak = "aAeEoOtTlL4433701";
	int i, j;

	for (i = 0; r[i]; i++)
	{
		for (j = 0; leetspeak[j]; j++)
		{
			if (r[i] == leetspeak[j])
			{
				r[i] = leetspeak[j + 10];
				break;
			}
		}
	}
	return (r);
}
