#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table
 * starting from 0
 * @n: The highest multiple to print (0 <= n <= 15)
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				_putchar('0');
			else
			{
				int res = i * j;

				if (res < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');	}
				else if (res < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');	}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');	}
			}
		}
		_putchar('\n');
	}
}
