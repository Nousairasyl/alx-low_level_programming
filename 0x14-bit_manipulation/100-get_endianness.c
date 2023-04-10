#include <stdio.h>

int get_endianness() {
    int x = 1;
    char *c = (char*) &x;
    return (int) *c;
}
