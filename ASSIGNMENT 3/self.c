// JOSHUA PEREIRA AYOMIDE//
// 222511//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
    FILE *input; 
    //open the file self.in 
    input = fopen("self.in", "r");
    if (input==NULL){
        // exception that if file cannot be opened dsiplay below//
            printf("File cannot be Found or Error in Opening File");
            exit(1);
        }

    int testCases;
   //read first line for the number of testcases
    fscanf(input, "%d", &testCases);
   
    int num_array[100];
    int count = 0;
    int len;
    char selfDescribing = 'T';

    for (int i=0; i<testCases; i++){
    // run the loop according to the number of testcases
        char num[100];
        fscanf(input, "%s", num);
    //read the next line from the file and store as variable num
        len = strlen(num);
    // get the length of the text from the file
        for (int j = 0; j < len; j++) {
    // storing each character into an array
            num_array[j] =num[j] - '0';
        }
        for (int step = 0; step< len; step++) {
            for (int i = 0; i< len; i++) {
                if (num_array[i] == step) 
                count++;
            }
            if(count == num_array[step]){
                selfDescribing = 'T';
            }
            else{
                selfDescribing = 'F';
                printf("Not self-describing\n");
                break;
            }
            count = 0;
            if (selfDescribing!= 'F'){
                printf("Self-describing\n");
                break;
            }
        }
        
    }
    fclose(input);
    return 0;
}