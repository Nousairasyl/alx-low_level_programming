/*
 * File: 101-natural.c
 * Auth: Vincent Kip
 * Desc: Computes the sum of all natural numbers below 1024 that are
 *       multiples of 3 or 5, and prints the result to the console.
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i, sum = 0;

        /* Loop through all numbers below 1024 */
        for (i = 0; i < 1024; i++)
        {
                /* Check if the number is a multiple of 3 or 5 */
                if ((i % 3) == 0 || (i % 5) == 0)
                {
                        /* If so, add it to the sum */
                        sum += i;
                }
        }

        /* Print the sum to the console */
        printf("%d\n", sum);

        return (0);
}
