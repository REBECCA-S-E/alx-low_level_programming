#include <stdlib.h>
#include "main.h"

int count_words(char *str);
int word_len(char *str);

/**
 * strtow - returns a pointer of an array
 * @str: string
 *
 * Return: success
 */
char **strtow(char *str)
{
	int index = 0, words, w, count, c;
	char **strings;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		count = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (count + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (c = 0; c < count; c++)
			strings[w][c] = str[index++];

		strings[w][c] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}

/**
 * count_words - counts avail words
 * @str: string
 *
 * Return: success
 */
int count_words(char *str)
{
	int index = 0, words = 0, count = 0;

	for (index = 0; *(str + index); index++)
		count++;

	for (index = 0; index < count; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * word_len - locates the index
 * @str: string
 *
 * Return: success
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}
