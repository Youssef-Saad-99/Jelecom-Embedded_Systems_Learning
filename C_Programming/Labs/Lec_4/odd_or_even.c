#include <stdio.h>

unsigned int num;

int main()
{

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num == 0 && num < 1)
    {
        printf("the number is zero.\n");
    }
    else if (num % 2 != 0)
    {
        printf("the number is odd.\n");
    }
    else
    {
        printf("the number is even.\n");
    }

    return 0;

}