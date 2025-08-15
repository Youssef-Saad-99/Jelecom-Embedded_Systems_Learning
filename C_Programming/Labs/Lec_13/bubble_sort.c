#include <stdio.h>

void bubble_sort(int *arr, int size)
{
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[6] = {3, 11, 2, 1, 10, 8};

    bubble_sort(arr, 6);

    for (int z = 0; z < 6; z++)
    {
        printf("%d ", arr[z]);
    }
    printf("\n");
    return 0;
}