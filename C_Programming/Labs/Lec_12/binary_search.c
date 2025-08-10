#include <stdio.h>

int binary(int *arr, int size, int num)
{
    int frist = 0;
    int end = size - 1;
    int mid = (frist + end) / 2;

    while (frist != end)
    {
        mid = (frist + end) / 2;
        
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] > num)
        {
            frist = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int index = binary(arr, 6, 4);

    printf("%d\n", index);

    return 0;
}