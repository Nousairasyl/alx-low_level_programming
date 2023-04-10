#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Find the most significant bit */
	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
			break;
	}

	/* Print each bit */
	for (j = i; j >= 0; j--)
	{
		if ((n >> j) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
