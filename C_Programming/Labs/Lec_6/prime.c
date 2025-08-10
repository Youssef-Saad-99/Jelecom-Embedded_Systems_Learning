#include <stdio.h>

void prinme(int number)
{
    if ((number % 2) == 0)
    {
        printf("The number %d is not prime.\n", number);
    }
    else
    {
        printf("The number %d is prime.\n", number);
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    prinme(number);

    return 0;
}