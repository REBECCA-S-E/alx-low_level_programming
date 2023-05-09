#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: first input
 * @accept: second input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, value;
	int check;

	value = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				check = 1;
				break;
			}
		}
		if (!check)
		{
			break;
		}
		value++;
	}

	return (value);
}
