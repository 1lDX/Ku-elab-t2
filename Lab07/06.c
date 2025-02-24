#include <stdio.h>

int charcount(char *s){
    int len = 0;
    for(len = 0; s[len] != '\0';len++);
    return len;
}

void charweave(char *s,char *result){
    int i,j,id = 0,len;
    len = charcount(s);
    for(i = 0,j = len-1 ;i<=j;i++,j--){
        result[id] = s[i];
        id++;
        if (i!=j) {
            result[id] = s[j];
            id++;
        }
    }
    for (j = len-1;j>=0;j--){
        result[id++] = result[j];
    }
    result[id] = 0;
    
}


int main()
{  char str[100],result[200];

   printf("String: ");
   fgets(str, 100, stdin);
   char *ch = str;
   while (*ch++ != '\n' || (*(--ch) = 0));
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}