#include <stdlib.h>
#include "main.h"

int count_words(char *str);
char **allocate_memory(int num_words);

/**
 * strtow - returns a pointer of an array
 * @str: string
 *
 * Return: success
 */
char **strtow(char *str)
{
	int i, j, k, len, num_words;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	words = allocate_memory(num_words);
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
			len++;

		words[j] = malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[j][k] = str[i++];
		words[j][len] = '\0';
		j++;
	}
	words[j] = NULL;
	return (words);
}

/**
 * count_words - counts avail words
 * @str: input
 *
 * Return: success
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
		{
			i++;
		}
	}
	return (count);
}

/**
 * allocate_memory - memory state
 * @num_words: input
 *
 * Return: success
 */
char **allocate_memory(int num_words)
{
	char **words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	words[num_words] = NULL;
	return (words);
}
