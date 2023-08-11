#include<stdio.h>
#include<math.h>

int fact(int n);

int main() {
    printf("sum is : %d", fact(10));

    return 0;
}

int fact(int n){
    if(n == 0) {
        return 1;
    }
    int factNm = fact(n - 1);
    int factN = factNm * n;
    return factN;
}