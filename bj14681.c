#include <stdio.h>

int main(void) {
    int x, y;
    
    scanf("%d %d", &x, &y);

    if(0 < x){
        if(0 < y) printf("1");
        else printf("4");
    }
    else{
        if(0 < y) printf("2");
        else printf("3");
    }

    return 0;
}