#include<stdio.h>
#include<string.h>

//user defined
struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main() {
    struct address adds[5];
    //input
    printf("enter info for person 1:");
    scanf("%d", adds[0].houseNo);
    scanf("%d", adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("enter info for person 2:");
    scanf("%d", adds[0].houseNo);
    scanf("%d", adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("enter info for person 3:");
    scanf("%d", adds[0].houseNo);
    scanf("%d", adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("enter info for person 4:");
    scanf("%d", adds[0].houseNo);
    scanf("%d", adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("enter info for person 5:");
    scanf("%d", adds[0].houseNo);
    scanf("%d", adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);
    
}

void printAdd(struct address add){
    printf("address is: %d,%d,%s,%s", add.houseNo, add.block,add.city,add.state);
}