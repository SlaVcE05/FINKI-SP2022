/*
Од тастатура се внесува четирицифрен број n што во себе содржи барем 2 цифри со вредност 5.

КОЛЕГА на тој број е бројот кој на позициите на кои има петки во првиот број ќе има шестка во бројот КОЛЕГА.
 (Пр. колега на 5551 е 6661).

На екран да се испечати за колку проценти едниот број е поголем/помал од другиот број. Да се има во предвид дека
 некогаш може да биде поголем бројот n , а некогаш неговиот колега.

Доколку бројот n не содржи најмалку 2 цифри петки, да се испечати порака за грешка како во тест примерите.

For example:
------------------
Input |	Result
------|-----------
5500  | 20.0000%
------------------

 */

#include <stdio.h>

int main(){

    int n;
    int c1,c2,c3,c4;

    int n1;

    scanf("%d",&n);

    c1 = n % 10;
    c2 = (n / 10) % 10;
    c3 = (n / 100) % 10;
    c4 = n / 1000;

    if(!(c1 == 5 && c2 == 5 || c1 == 5 && c3 == 5 || c1 == 5 && c4 == 5 || c2 == 5 && c3 == 5 || c2 == 5 && c3 == 5 || c3 == 5 && c4 == 5)){
        printf("Error");
        return 0;
    }

    if(c1 == 5)
        c1 = 6;
    if(c2 == 5)
        c2 = 6;
    if(c3 == 5)
        c3 = 6;
    if(c4 == 5)
        c4 = 6;

    n1 = c4 * 1000 + c3 * 100 + c2 * 10 + c1;

    float p = (n1 - n) * (100.0 / n);

    printf("%.4f%%",p);

}