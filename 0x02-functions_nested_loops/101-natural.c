#include <stdio.h>

/**
 * main - prints the sum of 3 or 5 up to 1024
 * Return: Always (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
		j += i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
