#include <stdio.h>
#include <string.h>

int main(void) {
	int number[2] = {0, };
	int sumList[5] = {0, };	
	
	scanf("%d %d", &number[0], &number[1]);
	
	sumList[0] = number[0] * (number[1]%10);
	sumList[1] = number[0] * ((number[1]%100)/10);
	sumList[2] = number[0] * (number[1]/100);
	sumList[3] = number[0] * number[1];

	for(int i = 0; i < (sizeof(sumList)/4)-1; i++){
		printf("%d\n", sumList[i]);
	}


	return 0;
}
