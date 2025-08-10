#include <stdio.h>

char num = 0;

int main()
{
    printf("Enter the number: ");
    scanf("%c", &num);

    num = (3<<6) | num;

    printf("num = %d\n", num);

    return 0;

}