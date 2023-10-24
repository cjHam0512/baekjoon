#include <stdio.h>

int main(void){
	int score = 0;
	char result;

	scanf("%d", &score);
	if(90 <= score && score <= 100) result = 'A';
	else if(80 <= score && score <= 89) result = 'B';
	else if(70 <= score && score <= 79) result = 'C';
	else if(60 <= score && score <= 69) result = 'D';
	else result = 'F';

	printf("%c", result);

	return 0;
}
