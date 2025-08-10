#include <stdio.h>

int num1, num2;
char op;

int main()
{
    printf("Enter nuber one: ");
    scanf("%d", &num1);
    printf("Enter nuber two: ");
    scanf("%d", &num2);
    printf("Enter the operation: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, (num1 + num2));
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, (num1 - num2));
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, (num1 * num2));
        break;
    case '/':
        if (num2 != 0)
        {
            printf("%d / %d = %d\n", num1, num2, (num1 / num2));
            break;
        }
        else
        {
            printf("For / case, please, enter number two greater than zero.\n");
            break;
        }
    default:
        printf("Please enter one of these: +, -, *, /\n");
        break;
    }

    return 0;
} 