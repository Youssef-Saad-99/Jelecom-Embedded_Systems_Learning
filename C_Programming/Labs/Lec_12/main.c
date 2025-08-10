#include <stdio.h>

int sum(int x, int y)
{
    return (x + y);
}

int sub(int x, int y)
{
    return (x - y);
}

int mult(int x, int y)
{
    return (x * y);
}

int (*ptr[3])(int, int) = {NULL};

int main()
{
    ptr[0] = sum;
    ptr[1] = sub;
    ptr[2] = mult;

    printf("sum = %d\n", ptr[0](6, 3));
    printf("sub = %d\n", ptr[1](6, 3));
    printf("mul = %d\n", ptr[2](6, 3));

    return 0;
}