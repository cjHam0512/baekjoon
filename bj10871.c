#include <stdio.h>

int main(void){
    int n=0, x=0, count=0;
    int a[10000] = {0, };

    scanf("%d", &n);
    scanf("%d", &x);

    for(int i=0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i < n; i++){
        if(a[i] < x) printf("%d ", a[i]);
    }
}