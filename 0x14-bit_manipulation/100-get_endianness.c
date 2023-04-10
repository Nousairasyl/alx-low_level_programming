int get_endianness(void)
{
    unsigned int test = 1;

    if ((*(char *)&test) & 1) {
        return 1; // little endian
    } else {
        return 0; // big endian
    }
}
