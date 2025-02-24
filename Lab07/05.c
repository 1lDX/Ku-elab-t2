#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *stoupper(const char str[]){
    char *str2 = malloc(100);
    for(int i = 0;str[i] != '\0';i++){
         str2[i]  = toupper(str[i]);

    }
    str2[100] = '\0';
    return str2;
}

int main(){
    char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);

}