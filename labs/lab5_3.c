#include <stdio.h>

int isPM = 0;
int isNOON = 0;
int h1 = 0;

void checkTime(int h, int min, int sec){
    if (h == 0) {
        h1 = 12;
        return;
    }

    if (h < 12){
        h1 = h;
        return;
    }

    if (h == 12 && min == 0 && sec == 0) {
        isNOON = 1;
        h1 = 12;
        return;
    }

    h1 = h - 12;
    isPM = 1;
}

int main() {
    int h, min, sec;

    scanf("%d", &h);
    scanf("%d", &min);
    scanf("%d", &sec);

    checkTime(h,min,sec);

    printf("%02d:%02d:%02d", h1, min, sec);

    if (isNOON)
        printf("NOON");
    else if (isPM)
        printf("PM");
    else printf("AM");

    return 0;
}