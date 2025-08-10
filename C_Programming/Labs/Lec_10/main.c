#include <stdio.h>

void print_name(void)
{
    printf("Youssef\n");
}

void (*ptr_fun) (void) = print_name;

int main()
{
    ptr_fun();

    return 0;
}