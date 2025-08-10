#include <stdio.h>

unsigned char num;

int main()
{
    printf("Enter the number: ");
    scanf("%c", &num);

    if((num % 1) == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }

    return 0;
}