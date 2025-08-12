#include <stdio.h>

int remove_duplicates(int arr[], int size)
{
    int temp[size], newSize = 0;
    for (int i = 0; i < size; i++)
    {
        int found = 0;
        for (int j = 0; j < newSize; j++)
        {
            if (arr[i] == temp[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            temp[newSize++] = arr[i];
        }
    }
    for (int i = 0; i < newSize; i++)
    {
        arr[i] = temp[i];
    }
    return newSize;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 5, 5};
    int size = remove_duplicates(arr, 7);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
