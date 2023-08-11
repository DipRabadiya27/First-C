#include<stdio.h>
#include<math.h>

int main() {
    int n;
    do{
        printf("enter number : ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 7 == 0){ //multiple of 7
            break;
        }

    } while(1);
    printf("thenk you \n");

    return 0;
}