#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursive - Calculates the square root of a number using recursion.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if it doesn't have one.
 */
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursive(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursive(n, 0));
	}
}

