#include <stdio.h>
#include "main.h"

/**
 * is_divisible - checks if a number is divisible by any other number.
 *
 * @n: The number to be checked.
 * @divisor: The divisor to check against.
 *
 * Return: 1 if divisible, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	if (divisor == 2)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (1);
	}
	else if (divisor * divisor > n)
	{
		return (0);
	}
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 *
 * @n: The number to be checked.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (!is_divisible(n, n - 1));
}
