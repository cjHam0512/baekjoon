#include <stdio.h>

int main(void){
    int a=0, b=0, c=0, temp=0;

    scanf("%d %d %d", &a, &b, &c);
    
    // 3개 모두 같은 수일때
    if(a == b && b == c) printf("%d", 10000 + a*1000);
    else{
        // 2개만 같은 수일때
        if(a == b) printf("%d", 1000 + a*100);
        else if(b == c) printf("%d", 1000 + b*100);
        else if(c == a) printf("%d", 1000 + c*100);
        else{
            // 모두 다른 수일때
            if(a < b) {
                if(b < c) printf("%d", c*100);
                else printf("%d", b*100);
            }else {
                if(a < c) printf("%d", c*100);
                else printf("%d", a*100);
            }
        }
    }
    return 0;
}