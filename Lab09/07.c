#include <stdio.h>

double findAverage(char *filename){
    double score,count,scores = 0,result = 0;
    FILE *file = fopen(filename, "r");
    
    while(1){
        if(fscanf(file, "%lf", &score) <= 0){
            break;
        }
        count+=1;
        scores+=score;
    }
    result = scores/count;
    return result;
}

int main(){
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}