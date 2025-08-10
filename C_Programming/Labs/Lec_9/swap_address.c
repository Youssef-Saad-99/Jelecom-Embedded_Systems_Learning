#include <stdio.h>

unsigned int num1, num2;

void swap(int *number1, int *number2)
{
    unsigned int *ptr = &num1;
    (int *) num1 = 
}

int main()
{
    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number two: ");
    scanf("%d", &num2);
    swap(&num1, num2);

    return 0;
}