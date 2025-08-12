#include <stdio.h>

float average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main()
{
    int arr[] = {5, 2, 9, 1, 6};
    printf("Average: %.2f\n", average(arr, 5));
    return 0;
}
