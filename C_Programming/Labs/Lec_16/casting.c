#include "STD_TYPE.h"

int main()
{
    *((volatile u8 *)0x5F) = 50;
    *((volatile u8 *)0x5E) = 60;
    *((volatile u8 *)0x5D) = 60;
    *((volatile u8 *)0x5C) = 60;

    return 0;
}