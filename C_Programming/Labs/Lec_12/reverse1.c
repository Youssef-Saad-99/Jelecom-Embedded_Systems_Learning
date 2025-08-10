#include <stdio.h>

void reverse(int *ptr, int size)
{
    int temp;

    for (int i = 0; i < (size / 2); i++)
    {
        temp = ptr[size - i -1];
        ptr[size - i - 1] = ptr[i];
        ptr[i] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};


    reverse(arr, 4);

    for(int i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}