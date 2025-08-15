#include <stdio.h>

int pow(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else if (power == 1)
    {
        return base;
    }
    else
    {
        return base * pow(base, (power - 1));
    }
}

int main()
{
    int num = pow(2, 4);
    printf("%d\n", num);

    return 0;
}