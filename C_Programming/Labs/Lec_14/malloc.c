#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, average, sum = 0;

    printf("Enter the size: ");
    scanf("%d", &size);

    int *ptr = (int *)malloc(4 * size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    average = sum / size;

    printf("Average = %d\n", average);
    free(ptr);

    return 0;
}