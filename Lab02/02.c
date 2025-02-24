#include <stdio.h>
#include <stdlib.h>
int main(){
    char star_c[10],dis_c[10],money_c[10];
    float money,result;
    int star,dis,diss;
    
    fgets(star_c,10,stdin);
    fgets(money_c,10,stdin);
    star = atoi(star_c);
    dis = atoi(dis_c);
    money = atof(money_c);
    
    if(star == 0){
        dis = 0;
    }else if (star == 1){
        dis = 10;
        star = star - 1;
    }else if (star == 2){
        dis = 15;
        star = star - 2;
    }else if (star >= 3 && star < 6){
        dis = 20;
        star = star - 3;
    }else if (star >= 6 && star < 9){
        dis = 30;
        star = star - 6;
    }else if (star >= 9){
        dis = 40;
        star = star - 9;
    }

    diss = money*dis/100;
    result = money-diss;
    
    printf("You get %d percents discount.\n",dis);
    printf("Total amount due is %.2f Baht.\n",result);
    printf("And you have %d stickers left.",star);
    return 0;
}