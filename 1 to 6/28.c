#include<stdio.h>
//declaration/prototype
void namaste();
void bonjour();

int main() {
    printf("enter f for french & i for indian : \n");
    char ch;
    scanf("%c ", &ch);

    if(ch == 'i') {
        namaste(); //function call
    } else {
        bonjour();
    }
    return 0;
}
//function definition
void namaste(){
    printf("Namaste \n");
}

void bonjour(){
    printf("Bonjour \n");
}