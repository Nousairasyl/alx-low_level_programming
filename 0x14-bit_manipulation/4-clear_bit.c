#include "main.h"

/**
 * clear_bit - Sets a bit at a given index to 0.
 * @n: Pointer to the number whose bit will be cleared.
 * @index: The index of the bit to be cleared.
 *
 * Return: 1 on success, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (n == NULL || index >= sizeof(*n) * CHAR_BIT)
        return (-1);

    *n &= ~(1UL << index);
    return (1);
}
