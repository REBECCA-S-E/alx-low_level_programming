#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;

	if (s != NULL)
	{
		while (*end != '\0')
		{
			end++;
			length++;
		}
		end--;

		while (start < end)
		{
			if (*start != *end)
				return (0);
			start++;
			end--;
		}
	}

	return (1);
}
