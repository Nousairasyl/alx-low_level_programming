/**
 * set_bit - Sets a bit in an unsigned long int
 * @n: Pointer to the number to be modified
 * @index: Index of the bit to be set
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (n == NULL)
        return (-1);

    unsigned long int mask = 1UL << index;

    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    *n |= mask;
    return (1);
}
