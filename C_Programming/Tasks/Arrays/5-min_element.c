#include <stdio.h>

int min_num(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {5, 2, 9, 1, 6};
    printf("Min: %d\n", min_num(arr, 5));
    return 0;
}
