#include <stdio.h>

int main(void){
    int hour = 0, minutes = 0, term = 0;

    scanf("%d %d %d", &hour, &minutes, &term);

    minutes += term;
    if(minutes < 60) printf("%d %d", hour, minutes);
    else {
        hour += minutes/60;
        minutes %= 60;
        if(hour < 24) printf("%d %d", hour, minutes);
        else {
            hour -= 24;
            printf("%d %d", hour, minutes);
        }
    }

    return 0;
}