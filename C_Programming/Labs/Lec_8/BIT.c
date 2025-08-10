#include "LIB/BIT_MATH.h"
#include <stdio.h>

int main()
{
    unsigned char num = 0b01011011;

    printf("number = %d\n", num);
    SET_BIT(num, 2);
    printf("number = %d\n", num);
    CLEAR_BIT(num, 6);
    printf("number = %d\n", num);
    TOGGLE_BIT(num, 4);
    printf("number = %d\n", num);
    GET_BIT(num, 1);
    printf("number = %d\n", num);

    return 0;
}