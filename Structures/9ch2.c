#include<stdio.h>
#include<string.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1;
    s1.roll= 1664;
    s1.cgpa=9.5;
    //s1.name="Dip";
    strcpy(s1.name, "Dip");

    printf("student name=%s \t", s1.name);
    printf("student roll=%d \t", s1.roll);
    printf("student cgpa=%f \n", s1.cgpa);

    struct student s2;
    s2.roll= 1665;
    s2.cgpa=9.2;
    strcpy(s2.name, "Parth");

    printf("student name=%s \t", s2.name);
    printf("student roll=%d \t", s2.roll);
    printf("student cgpa=%f \n", s2.cgpa);

    struct student s3;
    s3.roll= 1666;
    s3.cgpa=9.9;
    strcpy(s3.name, "Parth");

    printf("student name=%s \t", s3.name);
    printf("student roll=%d \t", s3.roll);
    printf("student cgpa=%f \n", s3.cgpa);
    return 0;
}
