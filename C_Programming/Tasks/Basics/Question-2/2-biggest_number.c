#include <stdio.h>

int num1, num2;

int main()
{
    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number two: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("Number %d is the biggest.\n", num1);
    }
    else if (num2 > num1)
    {
        printf("Number %d is the biggest.\n", num2);
    }
    else
    {
        printf("The two numbers are equal.\n");
    }

    return 0;
}