#include <stdio.h>

int main(void) {
    int hour = 0, minutes = 0;

    scanf("%d %d", &hour, &minutes);

    minutes -= 45;
    if(0 <= minutes) printf("%d %d", hour, minutes);
    else {
        minutes += 60;
        hour -= 1;
        if(0 <= hour) printf("%d %d", hour, minutes);
        else {
            hour += 24;
            printf("%d %d", hour, minutes);
        }
    }

    return 0;
}