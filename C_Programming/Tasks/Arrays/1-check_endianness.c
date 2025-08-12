#include <stdio.h>

void check_endianness()
{
    unsigned int x = 1;
    char *c = (char *)&x;
    if (*c)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
}

int main()
{
    check_endianness();
    return 0;
}
