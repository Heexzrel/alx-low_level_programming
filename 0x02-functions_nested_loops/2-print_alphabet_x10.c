#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char easy;
	int e;

	e = 0;

	while (e < 10)
	{
		easy = 'a';
		while (easy <= 'z')
		{
			_putchar(easy);
			easy++;
		}
		_putchar('\n');
		e++;
	}
}
