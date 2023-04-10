unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int flipped = n ^ m;
    unsigned int count = 0;

    for (int i = 0; i < sizeof(unsigned long int) * 8; i++) {
        if ((flipped >> i) & 1) {
            count++;
        }
    }

    return count;
}
