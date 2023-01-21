/*
Во дадена датотека `dat.txt` да се најде најдолгиот ред во кој има барем 2 цифри. На стандарден излез да се испечатат
 знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед.
 Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.

Пример.

Влез:
dat.txt:
aaa123aa222aa2aaa23aaaaa22
aaaaaaaaaaaa 23aaaa
123 aaa aaa aaa aaa 12345 aaa aaa 2a

Излез:
123 aaa aaa aaa aaa 12345 aaa aaa 2

For example:

| Input                                      | Result                                  |
|--------------------------------------------|-----------------------------------------|
| aaa123aa222aa2aaa23aaaaa22 11112 222311111 | 123aa222aa2aaa21aa11122 11112 aaaa11111 |
| aaa123aa222aa2aaa23aaaaa22 11112 aaaaaaaa1 |                                         |
| aaa123aa222aa2aaa23aaaaa22 11112 2a23111a1 |                                         |
| aaa123aa222aa2aaa23aaaaa22 11112 222311aa1 |                                         |
| aaa123aa222aa2aaa23aaaaa22 11112 222311111 |                                         |
| aaa123aa222aa2aaa21aa11122 11112 aaaa11111 |                                         |
| 1aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa |                                         |
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int has2Num(char str[MAX]) {

    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            count++;
        }
        if (count >= 2)
            return 1;

    }
    return 0;
}


int main() {
    wtf();
    // vasiot kod ovde

    char str[MAX];
    char lines[MAX][MAX];
    int map[MAX][1];
    int id = 0;


    FILE *f = fopen("dat.txt", "r");


    while ((fgets(str, MAX, f)) != NULL) {

        if (has2Num(str)) {
            map[id][0] = strlen(str);
            int i1 = -1, i2 = -1;
            char newStr[MAX];

            for (int i = 0; i < strlen(str); i++) {
                if (isdigit(str[i])) {
                    i1 = i;
                    break;
                }
            }

            for (int i = strlen(str); i > 0; i--) {
                if (isdigit(str[i])) {
                    i2 = i;
                    break;
                }
            }

            strncpy(newStr, str + i1, i2 - i1 + 1);
            strcpy(lines[id], newStr);
            id++;
        }
    }

    int largeStr = 0;
    int count = 0;

    for (int i = 0; i < id; i++) {

        if (map[i][0] >= count) {
            largeStr = i;
            count = map[i][0];
        }

    }

    printf("%s", lines[largeStr]);


}