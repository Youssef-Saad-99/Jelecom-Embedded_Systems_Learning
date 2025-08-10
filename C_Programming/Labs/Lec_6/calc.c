#include <stdio.h>

int number1, number2;
char op;

int calc(int num1, int num2, char op)
{
    switch (op)
    {
    case '+':
        return (num1 + num2); break;
    case '-':
        return (num1 - num2); break;
    case '*':
        return (num1 * num2); break;
    case '/':
        return (num1 / num2); break;
    }
}

int main()
{
    printf("Enter an operator: ");
    scanf("%c", &op);
    printf("Enter number one: ");
    scanf("%d", &number1);
    printf("Enter number two: ");
    scanf("%d", &number2);

    if (number2 == 0)
    {
        printf("Enter number two greater than zero.\n");
    }
    else
    {
        printf("Result = %d\n", calc(number1, number2, op));
    }

    return 0;
}