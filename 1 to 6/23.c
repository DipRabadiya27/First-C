#include<stdio.h>
#include<math.h>

int main() {

    
    int sum = 0;
    for(int i=5; i<=50; i++) {
        sum = sum + i;
    }
    printf("sum is %d \n", sum);

   /*for(int i=n; i>=1; i--) {
        printf("%d \n", i);
    }*/

    return 0;
}