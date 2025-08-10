#include<stdio.h>

void reverse(char *ptr)
{
    for (int iteration = 0; iteration < 8; iteration++)
    {
        if(ptr[7] == '\0')
        {
            break;
        }
        else
        {
            ptr++;
        }
    }
    for (int iteration = 6; iteration >= 0; iteration--)
    {
        printf("%c", ptr[iteration]);
        ptr--;
    }
    printf("\n");

}
int main()
{
    char name[] = "Youssef";

    reverse(name);

    return 0;
}