// JOSHUA AYOMIDE PEREIRA//
//222511


#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
  
   
    int testcase_no;
    int i;
     
    

    FILE *input;
    input = fopen("adam.in", "r");
    // Reading file from the same folder as the c file//

    if (input==NULL){
    // exception that if file cannot be opened dsiplay below//
        printf("File cannot be Found or Error in Opening File");
        exit(1);
    }
    fscanf(input, "%d", &testcase_no);
    // Reads the first line of the file which contains the number of testcases //

    printf("The number of textcases is %d\n ", testcase_no);
    for(i= 0; i< testcase_no; i++ ){
      // looping through the number of testcases from the file//
        char text[100];
        fscanf(input,"%s", text);
        // read the file line by line//
        int len;
        len = strlen(text);
        //getting the length of the strings in the file//
        
        int increment = 0;
        int j = 0;
        while(j<len){

         // looping through each character in the file //
            if(text[j] == 'U' || text[j] == 'u'){
               
                increment++;
            // a conditional statement where there is a U in a string  it must be incremented by 1 //
            }
                
        
                
            else if(text[j] == 'D' || text[j] == 'd'){
           
                break;
            }
              
            j++;
        }
      
        // printing the output//
        printf("%s | %d\n",text,j);

        printf("Adam walked %d Step(s) before Falling \n",increment);
        
       
        
    }   
    fclose(input);
    return 0;
    
}    
        

