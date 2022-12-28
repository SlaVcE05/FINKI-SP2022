/*
Да се напише функција void sort (int x, int y, int z) која што ќе ги сортира во опаѓачки редослед трите броја, односно
во x ќе биде сместен најголемиот број, а во z најмалиот.

Да не се менува main функцијата.

For example:
-------------------
 Input  |  Result
--------|----------
 1 2 3  |  3 2 1
-------------------
 */


#include <stdio.h>

void check(int *a,int *b){
    if(*a < *b){
        int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
}

void sort(int *x, int *y, int *z){
    check(x,y);
    check(y,z);
    check(x,y);
}

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    sort(&a, &b, &c);

    printf("%d %d %d", a, b, c);

    return 0;
}