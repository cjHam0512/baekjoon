#include <stdio.h>


int main(void){
    int number[100]={-0, };
    int count=0, find=0, result=0;
    // 입력 받을 정수 갯수
    scanf("%d", &count);
    
    for(int i=0; i < count; i++){
        scanf("%d ", &number[i]);
    }
    // 찾을 정수 
    scanf("%d", &find);
    
    for(int i=0; i < count; i++){
        if(number[i] == find) result++;
    }

    printf("%d", result);

    return 0;
}