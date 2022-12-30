//Да се напише рекурзивна функција преку која бројот ќе се трансформира на тој начин што секоја непарна цифра ќе се намали за 1,
//а парните цифри ќе бидат заменети со нула. Функцијата треба да го врати трансформираниот број. Да се напише и главна програма која ќе ја тестира работата на функцијата.

#include <stdio.h>

int transform(int num){
    if (num == 0)
        return 0;
    int n1 = num % 10;
    n1 = (n1 % 2 == 0)? 0 : n1 - 1;
    return transform(num / 10) * 10 + n1;
}

int main(){

    int num;

    scanf("%d",&num);

    printf("Brojot e %d",transform(num));
    return 0;
}