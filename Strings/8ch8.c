#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);

int main() {
    char firstStr[] = "HHHA";
    char secStr[] = "HHHB";
    printf("%d\n", strcmp(firstStr,secStr));
    printf("%d", strcmp(secStr,firstStr));
    return 0;
}
