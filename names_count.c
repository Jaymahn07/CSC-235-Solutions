#include<stdio.h>

int main(){

    int n;
    char name[30];
    /* character has a limit of only 30*/

    for (n=1; n<=10;n++){

    /* a for loop that iterates only 10 times*/

        printf(" ENTER YOUR FULLNAME STUDENT %d: ", n );
        scanf("%s", name);
         }
    return 0; 
    }
    