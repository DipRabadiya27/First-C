#include<stdio.h>

int main(){
    // int rows;
    // printf("enter number of rows:");
    // scanf("%d ", &rows);
    int n=5;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n;j++){
            if((i+j)<=n){
                printf(" "); 
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        }
    
}