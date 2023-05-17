#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a new memory
 * @str: string duplicate
 *
 * Return: string duplicate
 */
char *_strdup(char *str)
{
	int j = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);

	while (j < i)
	{
		s[j] = str[j];
		j++;
	}

	s[j] = '\0';
	return (s);
}
