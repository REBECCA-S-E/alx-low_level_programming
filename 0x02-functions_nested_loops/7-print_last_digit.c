#include "main.h"

/**
 * print_last_digit - prints the last digit
 * if num is negative, make it positive
 * get the last digit of num
 * @n: The num
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -n;

	ld = n % 10;

	_putchar(ld + '0');

	return (ld);
}
