#include<stdio.h>
#include<math.h>

int main(){
    int age = 25;
    int *ptr = &age;

    //address
    // printf("%p \n", &age);
    printf("%u \n", &age);
    printf("%u \n", ptr);
    printf("%u \n", &ptr);

    //value
    printf("%d \n", age);
    printf("%d \n", *ptr);
    printf("%d \n", *(&age));

    return 0;
}