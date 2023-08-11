#include<stdio.h>
#include<string.h>

typedef struct BankAccount{
    int accountNo;
    char name[100];
} acc;

int main() {
    acc acc1={123, "Dip"};
    acc acc2={124, "Parth"};
    acc acc3={125, "Smit"};

    printf("account no=%d", acc1.accountNo);
    printf("account name=%s", acc1.name);
    return 0;


}

