#include <stdio.h>

int is_even(int n)
{
    return (n % 2 == 0);
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (is_even(num))

    {
        printf("%d is Even\n", num);
    }
    else
    {
        printf("%d is Odd\n", num);
    }
    return 0;
}