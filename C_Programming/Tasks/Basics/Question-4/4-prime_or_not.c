#include <stdio.h>

unsigned int number, iteration;
char check;

int main()
{

    printf("Enter a number: ");
    scanf("%d", &number);

    for (iteration = 2; iteration < number; iteration++)
    {
        if (number % iteration == 0)
        {
            check = 0;
            break;
        }
        else 
        {
            check = 1;
        }
    }
    if (check == 1)
    {
        printf("The nubmer %d is prime.\n", number);
    }
    else
    {
        printf("The nubmer %d is not prime.\n", number);
    }
    
    return 0;
}