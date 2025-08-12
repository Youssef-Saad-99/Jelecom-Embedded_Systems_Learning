#include <stdio.h>

int search_int(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 2, 9, 1, 6};
    int index = search_int(arr, 5, 9);
    if (index != -1)
    {
        printf("Found at index %d\n", index);
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}
