#include "main.h"

/**
 * positive_or_negative - prints the function
 * @i: To be used
 */
void positive_or_negative(int i)
{
	int i;

	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
