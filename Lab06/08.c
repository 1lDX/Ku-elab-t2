#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner){
    array[0] = 0;
}



int main(){
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {
        int j = 0,count = 1;

        while (j<m){
            int temp = prisoners[0];
            for(int k = 0;k<numPrisoners-1;k++){
                prisoners[k] = prisoners[k+1];
            }
            prisoners[numPrisoners-1] = temp;
            if(prisoners[0] == 0){
                continue;
            }
            j++;
            if(i == 0 && count == 1){
                j++;
                count = 0;
            }
        }
        //printf("round : %d \n",i+=1);

        // append number of prisoner who is killed to array `killed`
            killed[i] = *killerPtr;
            // remove number killed prisoner from array `prisoners`
            removeKilled(&prisoners[0], numPrisoners, *killerPtr);
        

	    for (i = 0; i < numPrisoners; i++) {
		    printf("%d ", killed[i]);
	    }
	    return 0;
    }
}