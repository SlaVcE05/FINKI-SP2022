/*
Во дадена датотека `broevi.txt` се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1)
 што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот
 со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.

For example:
https://github.com/SlaVcE05/FINKI-SP2022/tree/main/vtor%20kolokvium_ispit%20vezbi#zad2

 * */


#include <stdio.h>
#include <stdlib.h>
#define MAX 100


int readNun(FILE *f, int len);

int getFirstNum(int num);

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();

    // vashiot kod ovde

    char string[MAX];

    FILE *f = fopen("broevi.txt", "r");

    while ((fscanf(f, "%s", string))){

        int len = atoi(string);

        if (len == 0)
            break;

        printf("%d\n", readNun(f,len));
    }

    fclose(f);

}

int readNun(FILE *f, int len) {
    char str[MAX];
    int fNum, num = 0;

    for (int i = 0; i < len; i++) {
        fscanf(f,"%s",str);
        int num1 = getFirstNum(atoi(str));
        if (num1 > num){
            num = num1;
            fNum = atoi(str);
        }
    }
    return fNum;

}

int getFirstNum(int num) {

    int first = 0;
    while (num){
        if(num < 10)
            first = num;
        num /= 10;
    }
    return first;
}
