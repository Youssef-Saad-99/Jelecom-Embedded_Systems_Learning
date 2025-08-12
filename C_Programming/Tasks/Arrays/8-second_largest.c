#include <stdio.h>

int second_largest(int arr[], int size)
{
    int max = arr[0], second = -2147483648;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            second = max;
            max = arr[i];
        }
        else if (arr[i] > second && arr[i] != max)
        {
            second = arr[i];
        }
    }
    return second;
}

int main()
{
    int arr[] = {5, 2, 9, 1, 6};
    printf("Second Largest: %d\n", second_largest(arr, 5));
    return 0;
}
