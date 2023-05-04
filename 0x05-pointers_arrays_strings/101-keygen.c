#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 64

/**
 * main - generates password
 * Return: Always 0
 */
int main(void)
{
	char password[PASSWORD_LEN + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LEN; i++)
	{
		password[i] = rand() % 94 + 33;
	}
	password[PASSWORD_LEN] = '\0';

	printf("%s", password);

	return (0);
}
