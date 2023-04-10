#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 1UL << 63; /* start with most significant bit */

	/* find most significant bit */
	for (i = 0; i < 64; i++)
	{
		if ((n & mask) != 0)
			break;
		mask >>= 1; /* shift mask right */
	}

	/* print each bit */
	for (; i < 64; i++)
	{
		_putchar((n & mask) != 0 ? '1' : '0');
		mask >>= 1; /* shift mask right */
	}
}
