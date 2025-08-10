#include <stdio.h>

int number = 0;

void increament(int *number)
{
    (*number)++;
}
int main()
{
    printf("Enter a number: ");
    scanf("%d", &number);

    increament(&number);

    printf("The number = %d\n", number);

    return 0;
}