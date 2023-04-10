/**
 * set_bit - Sets the bit at a given index in an unsigned long integer
 *
 * @n: Pointer to the number to be modified
 * @index: Index of the bit to be set
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (!n || index >= CHAR_BIT * sizeof(*n))
        return (-1);

    *n |= 1UL << index;

    return (1);
}
