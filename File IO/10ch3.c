#include<stdio.h>
#include<string.h>

//read
int main() {
    FILE *fptr;

    fptr = fopen("newtext.txt","r");
    int ch;
    fscanf(fptr, "%d", &ch);
    printf("character= %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("character= %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("character= %d\n", ch);
    fclose(fptr);
    
    return 0;
}