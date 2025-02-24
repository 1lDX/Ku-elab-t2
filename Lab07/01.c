#include <stdio.h>

int main(){
    char word[100];
    int index,count = 0;
    printf("String (without a space): ");
    scanf("%s", word);

    for(int i = 0;word[i] != '\0';i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            printf("%c ",word[i]);
            count++;
        }
    }
    printf("\n");
    if(count >1){
        printf("This string contains %d vowels.",count);
    }else{
        printf("This string contains %d vowel.",count);
    }
    
    return 0;
}