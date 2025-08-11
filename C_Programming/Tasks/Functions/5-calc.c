#include <stdio.h>

float calculate(char op, float a, float b)
{
    switch (op)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        if (b != 0)
        {
            return a / b;
        }
        else
        {
            printf("Error: Division by zero!\n");
            return 0;
        }
        break;
    default:
        printf("Error: Invalid operation!\n");
        return 0;
    }
}

int main()
{
    float num1, num2, result;
    char op;
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    result = calculate(op, num1, num2);
    printf("Result: %.2f\n", result);

    return 0;
}
