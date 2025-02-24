#include <stdio.h>

typedef enum{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}DayOfWeek;


DayOfWeek findDayOfWeek(int day, int month){
    int year = 2013; 
    if (month < 3){
        month += 12;
        year--;
    }
    int k = year % 100;   
    int j = year / 100;
    int h = (day + (13 * (month + 1))/5+k+(k/4)+(j/4)+(5*j))%7;
    return (h + 6) % 7;
}

int main() {
    int day, month;
    DayOfWeek dow;

    printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
    printf("Enter Day and Month: ");
    scanf("%d %d", &day, &month);

    dow = findDayOfWeek(day, month);

    printf("Day:%d Month:%d of Year 2013 is ", day, month);
    switch(dow) {
        case SUNDAY:    printf("Sunday.\n"); break;
        case MONDAY:    printf("Monday.\n"); break;
        case TUESDAY:   printf("Tuesday.\n"); break;
        case WEDNESDAY: printf("Wednesday.\n"); break;
        case THURSDAY:  printf("Thursday.\n"); break;
        case FRIDAY:    printf("Friday.\n"); break;
        case SATURDAY:  printf("Saturday.\n"); break;
    }

    return 0;
}
