#include <stdio.h>
#include <stdlib.h>

int main() {
    char goal_c[12], collect_c[12];
    float total = 0.0, goal, collect, left;
    int day = 0;

    printf("Enter your goal amount: ");
    fgets(goal_c, 12, stdin);
    goal = atof(goal_c); 
    left = goal;        

    while (left > 0) {
        printf("Enter money collected today: ");
        fgets(collect_c, 12, stdin);
        collect = atof(collect_c);

        total += collect; 
        left -= collect;
        day++;            

        if (left > 0) {
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", day, total, left);
        }
    }

    if (day == 1) {
        printf("Congratulations! You take %d day to reach your goal.\n", day);
    } else {
        printf("Congratulations! You take %d days to reach your goal.\n", day);
    }

    return 0;
}
