#include <stdio.h>

typedef struct
{
    int id;
    char name[40];
    int grade[3];
} Student;

void average(Student *st)
{
    int average = (st->grade[0] + st->grade[1] + st->grade[2]) / 3;

    printf("average = %d\n", average);
}

int main()
{
    Student arr[2] = {{1, "Youssef", {50, 70, 90}}, {2, "Mostafa", {40, 60, 80}}};

    average(arr);
    average(arr+1);
    return 0;
}