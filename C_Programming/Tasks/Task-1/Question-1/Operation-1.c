#include <stdio.h>

signed int number1, number2;

int main()
{
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    if (number2 == 0)
    {
        printf("Enter number two greater than zero.\n");
    }
    else 
    {
        printf("Sum = %d\n", (number1 + number2));
        printf("Difference = %d\n", (number1 - number2));
        printf("Product = %d\n", (number1 * number2));
        printf("Quotient = %d\n", (number1 / number2));
        printf("Remainder = %d\n", (number1 % number2));
    }


    return 0;
}