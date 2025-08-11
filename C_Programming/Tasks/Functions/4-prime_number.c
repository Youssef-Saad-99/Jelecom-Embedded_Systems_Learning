#include <stdio.h>

int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (is_prime(num))
    {
        printf("%d is Prime\n", num);
    }
    else
    {
        printf("%d is NOT Prime\n", num);
    }
    return 0;
}
