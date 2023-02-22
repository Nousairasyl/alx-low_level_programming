#include <stdio.h>

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long fib1 = 0, fib2 = 1, fib_sum = 0, even_sum = 0;

    while (fib_sum < 4000000)
    {
        fib_sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_sum;
        if (fib_sum % 2 == 0)
            even_sum += fib_sum;
    }

    printf("%lu\n", even_sum);

    return (0);
}
