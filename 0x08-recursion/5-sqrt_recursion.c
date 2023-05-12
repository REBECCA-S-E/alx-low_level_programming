#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the square root of n if it is a perfect square, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int val;
	int squ;
	int root;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	squ = 0, val = n, root = -1;

	if (squ >= val)
	{
		int mid = (squ + val) / 2;

		if (mid * mid == n)
			return (mid);
		if (mid * mid < n)
		{
			squ = mid + 1;
			root = mid;
		}
		else
		{
			val = mid - 1;
		}
	}

	return (root);
}

