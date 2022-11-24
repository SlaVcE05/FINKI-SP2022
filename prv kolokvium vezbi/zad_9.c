#include <stdio.h>

int main(){

    int zbir = 0;
    char c;

    while (1){
        scanf("%c",&c);

        if(c == '.')
            break;


        if(c >= '0' && c<='9')
            zbir += c- '0';

        if(c >= 'A' && c <= 'F')
            zbir += c - 'A' + 10;

        if(c >= 'a' && c <= 'f')
            zbir += c - 'a' + 10;

    }

    if(zbir % 16 == 0){
        if(zbir % 100 == 16){
            printf("Poln pogodok");
            return 0;
        }
        printf("Pogodok");

        return 0;
    }

    printf("%d",zbir);



}