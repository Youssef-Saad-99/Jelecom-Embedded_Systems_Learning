#include <stdio.h>

void swap_pointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_bitwise(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swap_multiplication_division(int *a, int *b)
{
    if (*a != 0 && *b != 0)
    {
        *a = (*a) * (*b);
        *b = (*a) / (*b);
        *a = (*a) / (*b);
    }
}

void swap_temp_variable(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b, choice;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose swap method:\n");
    printf("1. Using Pointers\n");
    printf("2. Using Bitwise XOR\n");
    printf("3. Using Multiplication/Division\n");
    printf("4. Using Temporary Variable\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        swap_pointers(&a, &b);
        break;
    case 2:
        swap_bitwise(&a, &b);
        break;
    case 3:
        swap_multiplication_division(&a, &b);
        break;
    case 4:
        swap_temp_variable(&a, &b);
        break;
    default:
        printf("Invalid choice!\n");
        return 1;
    }

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
