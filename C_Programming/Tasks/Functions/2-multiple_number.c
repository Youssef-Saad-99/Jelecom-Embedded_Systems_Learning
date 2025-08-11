#include <stdio.h>

int is_multiple(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    return (a % b == 0);
}

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (is_multiple(a, b))
    {
        printf("%d is a multiple of %d\n", a, b);
    }
    else
    {
        printf("%d is NOT a multiple of %d\n", a, b);
    }
    return 0;
}
