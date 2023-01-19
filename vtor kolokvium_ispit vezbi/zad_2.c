/*
Во дадена датотека `broevi.txt` се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1)
 што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот
 со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.

For example:
https://github.com/SlaVcE05/FINKI-SP2022/tree/main/vtor%20kolokvium_ispit%20vezbi#zad-2

 * */


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#define MAX 100

//todo full path
#define PATH "..\\broevi.txt"


//ne menuvaj!
void wtf() {
    FILE *f = fopen(PATH, "w");
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


}
