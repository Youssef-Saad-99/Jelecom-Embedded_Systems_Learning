#include <stdio.h>

int degree;

int main()
{

    printf("Enter the number: ");
    scanf("%d", &degree);

    if (degree >= 85)
        printf("Excellent\n");
    else if (degree >= 75)
        printf("Very Good\n");
    else if (degree >= 65)
        printf("Good\n");
    else if (degree >= 50)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;
}