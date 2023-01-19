/*
Дадена е текстуална датотека text.txt.

Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.

Пример: за датотеката:

IO is short for Input Output
medioio medIo song
излез:

io
ou
io
oi
io
io
6

For example:

| Input	          | Result |
|-----------------|--------|
| Why so serious? | io     |
| #               | ou     |
|                 | 2      |

 * */


#include <stdio.h>
#include <ctype.h>
#include <string.h>

//todo full path
#define PATH "..\\text_z1.txt"

void writeToFile() {
    FILE *f = fopen(PATH, "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int checkChar(char c){
    c = tolower(c);

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
    }

    return 0;
}

int main() {

    writeToFile();

    // Vasiot kod zapocnuva od tuka

    char c1, c2;
    int count = 0;

    FILE *file = fopen(PATH,"r");

    c1 = fgetc(file);
    c2 = fgetc(file);

    while (c2 != EOF){

        if (checkChar(c1) && checkChar(c2)){

            printf("%c%c\n", tolower(c1), tolower(c2));
            count++;
        }


        c1 = c2;
        c2 = fgetc(file);

    }
    fclose(file);
    printf("%d",count);

    return 0;
}
