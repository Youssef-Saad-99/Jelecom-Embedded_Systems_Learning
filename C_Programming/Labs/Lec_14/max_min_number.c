#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, max = 0, min;

    printf("Enter the size: ");
    scanf("%d", &size);

    int *ptr = (int *)calloc(size, sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);

        if (ptr[i] > max)
        {
            max = ptr[i];
        }
        if (i == 0)
        {
            min = ptr[i];
        }
        if (ptr[i] < min)
        {
            min = ptr[i];
        }
    }

    printf("Max number = %d\n", max);
    printf("Min number = %d\n", min);
    free(ptr);

    return 0;
}