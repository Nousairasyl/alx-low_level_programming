#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: pointer to the binary string
 *
 * Return: the unsigned int converted from binary, or 0 if b is invalid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	for (; *b; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = (n << 1) + (*b - '0');
	}

	return (n);
}
