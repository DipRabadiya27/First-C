#include<stdio.h>
#include<string.h>

//user defined
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu;//nickname

int main() {
    struct student s1;
    s1.roll= 1664;
    s1.cgpa=9.5;
    strcpy(s1.name, "Dip");
    printf("student name:%s", s1.name);

    return 0;
}
