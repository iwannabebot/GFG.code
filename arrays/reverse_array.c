#include <stdio.h>
#include <stdlib.h> 

int main() {
	//code
	int noOfTestCases = 0;
	scanf("%d", &noOfTestCases);
	while(noOfTestCases--){
	    int sizeOfArray = 0;
	    scanf("%d", &sizeOfArray);
	    int *array;
		array = (int *)calloc(sizeOfArray, sizeof(int));
	    int writeIndex = sizeOfArray;
	    while(writeIndex--){
			
			int index = sizeof(int) * writeIndex;
	        scanf("%d", array + index);
	    }
	    int readIndex = sizeOfArray;
	    while(readIndex--){
			int index = sizeof(int) * (sizeOfArray - readIndex - 1);
	        printf("%d", *(array + index));
	    }
		free(array);
	}
	return 0;
}