#include <stdio.h>

int main()
{
    int num[10];
    int max = 0, min = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num[i]);

        if (i == 0)
        {
            min = num[i];
        }

        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    printf("Max element = %d\n", max);
    printf("Min element = %d\n", min);

    return 0;
}