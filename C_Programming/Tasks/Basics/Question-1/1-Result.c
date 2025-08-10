#include <stdio.h>

int num1, num2;

int main()
{
    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number two: ");
    scanf("%d", &num2);

    printf("The Result = %.2f\n", (((float)num1 + (float)num2) * 3) / 2 -10);

    return 0;
}