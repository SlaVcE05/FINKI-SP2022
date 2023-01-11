/*
Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што левата
 и десната половина од стрингот ќе си ги сменат местата.

Напомена: Сите тест примери ќе имаат парен број на знаци.

For example:
---------------------
 Input     |  Result
-----------|------------
Stefan     | fanSte
-----------|------------
Strukturno | turnoStruk
---------------------
 */

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    char str[MAX];
    char tmp[MAX];

    scanf("%s",&str);
    strcpy(tmp,str + strlen(str)/2);
    strncat(tmp,str, strlen(str)/2);
    strcpy(str,tmp);
    printf("%s",str);

    return 0;
}