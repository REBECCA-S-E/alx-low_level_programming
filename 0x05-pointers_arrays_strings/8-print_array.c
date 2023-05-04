#include <stdio.h>

/**
 *print_array -  print n element of an array of integers
 * @a: the first array to be printed
 * @n: the second array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
