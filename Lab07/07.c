#include <stdio.h>
#include <stdlib.h>

void roman2arabic(char input[],char output[]) {
    int i, j = 0;
    
    for (i = 0; input[i] != '\0'; i++) {
        if(input[i] == 'I') {
            if(input[i+1] == 'V'){
                output[j++] = '4'; 
                i++;
            } else if(input[i+1] == 'X'){
                output[j++] = '9';
                i++;
            } else if (input[i+1] == 'I') {
                if (input[i+2] == 'I'){
                    output[j++] = '3';
                    i+=2;
                } else {
                    output[j++] = '2';
                    i++;
                }
            } else {
                output[j++] = '1';
            }
        } else if (input[i] == 'V') {
            if (input[i+1] != 'I') {
                output[j++] = '5';
            } else if (input[i+1] == 'I' && input[i+2] == 'I' && input[i+3] == 'I') {
                output[j++] = '8';
                i+=3;
            } else if (input[i+1] == 'I' && input[i+2] == 'I') {
                output[j++] = '7';
                i+=2;
            } else {
                output[j++] = '6';
                i++;
            }
        } else {
            output[j++] = input[i];
        }
    }

    output[j] = '\0';
}


int main(){  char input[80],output[80];
   printf(" Input: ");
   fgets(input, 80, stdin);
   char *ch = input;
   while (*ch++ != '\n' || (*(--ch) = 0));

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}