#include<stdio.h>

int main(){
    int n =5;
    char A;
    // printf("enter number:");
    // scanf("%d ", &n);

    for(int i=1;i<=n;i++){
        for(int j =1;j<=i;j++)
        {
            printf("%c", 64+j);
        }
        printf("\n");
    }
    return 0;
}