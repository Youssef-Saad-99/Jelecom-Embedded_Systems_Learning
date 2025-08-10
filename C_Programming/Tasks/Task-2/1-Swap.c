#include <stdio.h>

char variable;
char temp, temp1;
char new_variable;

int main()
{
    printf("Enter a number or character: ");
    scanf("%d", &variable);

    temp = (1 << 6) & variable;
    temp1 = (1 << 2) & variable;

    if (temp == 0)
    {
        new_variable = ~(1 << 2) & variable;
    }
    else
    {
        new_variable = (1 << 2) | variable;
    }
    if (temp1 == 0)
    {
        new_variable = ~(1 << 6) & new_variable;
    }
    else
    {
        new_variable = (1 << 6) | new_variable;
    }
    printf("Before swapping: %d\n", variable);
    printf("After swapping: %d\n", new_variable);

    return 0;
}