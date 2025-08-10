#include <stdio.h>

int main()
{
    int grade1, grade2, grade3, grade4, grade5;

    printf("Enter grade number one: ");
    scanf("%d", &grade1);
    printf("Enter grade number two: ");
    scanf("%d", &grade2);
    printf("Enter grade number three: ");
    scanf("%d", &grade3);
    printf("Enter grade number four: ");
    scanf("%d", &grade4);
    printf("Enter grade number five: ");
    scanf("%d", &grade5);

    printf("The average = %d\n", ((grade1 + grade2 + grade3 + grade4 + grade5) / 5));

    return 0;
}