#include <stdio.h>

int main(){
    int a1,b1,i,count;
    scanf("%d",&a1);
    scanf("%d",&b1);
    char arr[b1][a1];
    for(int i = 0; i < b1; i++){
        scanf("%s",arr[i]);
    }
    arr[b1-1][a1] = 0;

    for(i = 0; i < b1-1; i++){
        count = 0;
        for(int j = 0; j < a1; j++){
            if(arr[i][j] != arr[i+1][j]){
                count++;
            }
        }
        if(count > 2){
            arr[i][a1] = 0;
            break;
        }
    }
    printf("%s",arr[i]);
}