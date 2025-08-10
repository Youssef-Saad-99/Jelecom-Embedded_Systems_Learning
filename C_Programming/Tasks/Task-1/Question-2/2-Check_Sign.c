#include <stdio.h>

signed int number1;

int main()
{
    printf("Enter a number: ");
    scanf("%d", &number1);

    if (number1 == 0)
    {
        printf("The number is zero.\n");
    }
    else if (number1 > 0)
    {
        printf("The number is positive.\n");
    }
    else
    {
        printf("The number is negative.\n");
    }

    return 0;
}