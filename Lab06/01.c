#include <stdio.h>
int main(){
    char time;
    int hr,min;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c",&hr,&min,&time);
    
    if ((time == 'a' || time == 'A') && hr == 12){
        hr = 0;
    }else if ((time == 'p' || time == 'P') && hr == 12){
        hr = 12;
    }else if (time == 'P' || time == 'p'){
        hr += 12;
    }else if (time == 'a' || time == 'A')
        hr += 0;

    printf("Equivalent 24-hour time: %02d:%02d",hr,min);
    return 0;
}