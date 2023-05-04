#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;

	while (s[j + 1] != '\0') /* Find the end of the string */
		j++;

	/* Swap characters from the beginning and end of the string */
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
