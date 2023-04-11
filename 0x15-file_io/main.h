#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Function that calculates the factorial of a number */
int factorial(int n);

/* Function that calculates the nth fibonacci number */
int fibonacci(int n);

/* Function that calculates the area of a circle given its radius */
double area_of_circle(double radius);

#endif
