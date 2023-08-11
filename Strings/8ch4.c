#include<stdio.h>

void printString(char arr[]);

int main(){
    // char firstname[50];
    // scanf("%s", firstname);
    // printf("your name is %s", firstname);

    // char str[100];
    // fgets(str,100,stdin);
    // puts(str);

    char canchange = "hello world";
    puts(canchange);
    canchange="hello";
    puts(canchange);
    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i] != '\0';i++) {
        printf("%c \t", arr[i]);
    }
    printf("\n");
}