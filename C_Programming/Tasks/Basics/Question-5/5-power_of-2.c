#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("The number is zero.\n");
    }
    else if ((number % 2) == 0)
    {
        printf("The number %d is a power of 2.\n", number);
    }
    else
    {
        printf("The number %d is not power of 2.\n", number);
    }

    return 0;
}