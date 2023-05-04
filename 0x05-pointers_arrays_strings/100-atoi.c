#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+' || (*s >= '0' && *s <= '9'))
		{
			break;
		}
		s++;
	}

	while (*s != '\0' && (*s >= '0' && *s <= '9'))
	{
		num = num * 10 + (*s - '0');
		s++;
	}

	return (sign * num);
}
