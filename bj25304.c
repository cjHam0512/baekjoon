#include <stdio.h>

int main(void){
    int totalPrice=0, type=0, price=0, number=0, sum=0;

    scanf("%d %d", &totalPrice, &type);

    for(int i = 0; i < type; i++){
        scanf("%d %d", &price, &number);
        sum+=(price*number);
    } 

    if(totalPrice == sum) printf("Yes");
    else printf("No");

    return 0;
}