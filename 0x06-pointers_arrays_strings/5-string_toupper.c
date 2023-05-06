#include "main.h"

/**
 * *string_toupper - changes lower case to upper case
 * @r: pointer
 * Return: r
 */
char *string_toupper(char *r)
{
	char *p = r;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 32;
		}
		p++;
	}

	return (r);
}
