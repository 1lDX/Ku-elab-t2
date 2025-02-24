#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char id[12];
    int score;
}studentRecord;

void init(studentRecord list[], int size) {
    strcpy(list[0].id, "55100001");
    list[0].score = 0;
    strcpy(list[1].id, "55100002"); 
    list[1].score = 0;
    strcpy(list[2].id, "55100003");
    list[2].score = 0;
}

void enterScore(studentRecord list[], int size){
    char input[12];
    int sc;
    scanf("%s %d",&input, &sc);
    for(int i = 0;i<3;i++){
        char *find = strstr(list[i].id, input);
        if (find != NULL){
            list[i].score = sc;
        }
    }

}

void printRecords(studentRecord list[], int size) {
	int i;

	printf("   ID        Score\n");
	for (i = 0; i < size; i++) {
		printf("%s       %d\n", list[i].id, list[i].score);
	}
}




int main() {
	int enter;
	studentRecord list[3];

	init(list, 3);
        enterScore(list, 3);
	printRecords(list, 3);
	return 0;
}