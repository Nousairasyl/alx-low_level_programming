#include <stdio.h>
#include <stdlib.h>
#include "../holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        fprintf(stderr, "Usage: %s filename\n", av[0]);
        return (1);
    }
    n = read_textfile(av[1], 114);
    fprintf(stdout, "\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    fprintf(stdout, "\n(printed chars: %li)\n", n);
    return (0);
}
