#include <stdio.h>

int max_num(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {5, 2, 9, 1, 6};
    printf("Max: %d\n", max_num(arr, 5));
    return 0;
}
