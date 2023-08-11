#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);

int main() {
    char firstStr[100]= "hello ";
    char secString[100]="world";
    strcat(firstStr, secString);
    puts(firstStr);
    return 0;
}
