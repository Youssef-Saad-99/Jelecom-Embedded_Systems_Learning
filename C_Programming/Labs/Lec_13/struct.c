#include <stdio.h>

typedef struct
{
    int id;
    char name[40];
    int grade[3];
} Student;

int main()
{
    Student student1 = {1, "Youssef", {50, 70, 90}};
    Student student2 = {1, "Mostafa", {40, 60, 80}};

    printf("Average of grades of student1 = %d\n", ((student1.grade[0] + student1.grade[2] + student1.grade[2]) / 3));
    printf("Average of grades of student2 = %d\n", ((student2.grade[0] + student2.grade[2] + student2.grade[2]) / 3));

    return 0;
}
