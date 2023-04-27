#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be in binary.
 */
void print_binary(unsigned long int h)
{
	if (h > 1)
		print_binary(h >> 1);

	_putchar((h & 1) + '0');
}
