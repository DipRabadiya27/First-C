#include<stdio.h>
#include<math.h>
//declaration/prototype
void printHello();
void printGoodbye();

int main() {
    printHello(); //function call
    printGoodbye();
    printHello();
    return 0;
}
//function definition
void printHello(){
    printf("hello \n");
}

void printGoodbye(){
    printf("Goodbye \n");
}