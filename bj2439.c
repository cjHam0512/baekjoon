#include <stdio.h>

int main(void){
    int number=0;

    scanf("%d", &number);

    for(int i=0; i < number; i++){
        // 빈칸 출력
        for(int j=1; j < number-i; j++){
            printf(" ");
        }       
        // 별표 출력
        for(int j=-1; j < i; j++){
            printf("*");
        }
        // 줄바꿈
        printf("\n");
    }

    return 0;
}