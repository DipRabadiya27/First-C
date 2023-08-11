#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter number :");
    scanf("%d", &n);

    /*int i = 0;
    while( i<= n) {
        printf("%d \n", i);
        i++;
    }*/

   /* for(int i=0; i<=n; i++) {
        printf("%d \n", i);
    }*/

    int i=1;
    do {
        printf("%d \n",i);
        i++;
    } while (i<=n);
    return 0;
}