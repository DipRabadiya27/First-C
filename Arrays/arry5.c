#include<stdio.h>

void printNumbers(int arr[], int n);

int main(){
    //2 x 3
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=89;
    marks[0][2]=79;

    marks[1][0]=90;
    marks[1][1]=89;
    marks[1][2]=79;
    printf("%d", marks[0][0]);
    return 0;
}
