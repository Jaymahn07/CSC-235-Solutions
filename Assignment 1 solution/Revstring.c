#include<stdio.h>
#include<string.h>
int main(){
    char text_rev[100];
/** text storing up to 100 characters  **/
    int length, l;
/** receives input from the user **/
    printf("PLEASE ENTER THE SENTENCE YOU WANT TO REVERSE:");
    fgets(text_rev,100, stdin);
/** gets the length of the string**/
    length = strlen(text_rev);
/** iterates through the characters in the sentence and prints in reverse **/
    for(l =length -1; l>= 0; l--){
        printf("%c", text_rev[l]);
    }










    return 0;
}
