#include <stdio.h>

int linear(int *arr, int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
        
    }
}

int main()
{
    int arr[5] = {5, 7, 4, 88, 42};

    int index = linear(arr, 5, 4);
    printf("The number %d is in the index %d.\n", 4, index);

    return 0;
}