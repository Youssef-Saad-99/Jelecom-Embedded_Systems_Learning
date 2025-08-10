#include <stdio.h>

int check_number(int number)
{
    if (number % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int number, check;

    printf("Enter a number: ");
    scanf("%d", &number);

    check = check_number(number);

    if (check == 0)
    {
        printf("The number %d is even.\n", number);
    }
    else
    {
        printf("The number %d is odd.\n", number);
    }

    return 0;
}