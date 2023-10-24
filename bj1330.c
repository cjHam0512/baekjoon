#include <stdio.h>
#include <string.h>

int main(void) {
	int a, b;
	char result[3] = {0, };
	
	scanf("%d %d", &a, &b);
	if(a < b) strcpy(result, "<");
	else if(a > b) strcpy(result, ">");
	else strcpy(result, "==");

	printf("%s", result);

	return 0; 
}
