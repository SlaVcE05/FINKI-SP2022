//Се внесува време во македонска форма (3 вредности: час - од 0 до 23, минути – од 0 до 59, и секунди – од 0 до 59).
// Да се презентира времето во интернационална форма во која за 0 часот стои 12, од 13 часот до 23 се всушност од 1 до 11,
// а на крајот стои AM доколку времето е претпладне (од 0:00:00 до 11:59:59) и PM доколку времето е попладне (од 12:00:01 до 23:59:59).
// За времето на пладне (12:00:00) после него се печати NOON.

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