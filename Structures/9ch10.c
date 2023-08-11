#include<stdio.h>
#include<string.h>

struct complex{
    int real;
    int img;
};

int main() {
    struct complex number1={5,8};
    struct complex *ptr =&number1;
    printf("real number =%d\n", ptr->real);
    printf("img number =%d\n", ptr->img);

}

