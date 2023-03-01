#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 * Return: Always 0 (success)
 */
int main(void)
{
	int sum = 0, r = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (sum < 2772)
	{
		r = rand() % 128;
		if ((sum + r) > 2772)
			break;
		sum = sum + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - sum));
	return (0);
}
