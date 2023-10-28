#include <stdio.h>

int main(void){
    int number=0;

    scanf("%d", &number);

    for(int i=1; i <= number; i++){
        for(int j=0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}