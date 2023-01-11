/*
Да се напише програма која што од датотека со име "text.txt" ќе ја одреди и ќе ја испечати на стандарден излез
 релативната фреквенција на буквата c која се вчитува од тастатура.

Релативната фреквенција на буквата се пресметува како количник на вкупното појавување на таа буква (без разлика на
 големината на буквата) со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).

Да не се менува функцијата writeToFile().

For example:

 Input
 Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse efficitur tempus enim, id imperdiet nisl rhoncus et. Nunc aliquam suscipit ex eget tincidunt. Nullam finibus ipsum congue, tempus quam et, condimentum diam. MAECENAS COMMODO est NIBH, ac condimentum neque ultrices in. Donec varius lectus nibh. Praesent quis turpis quis purus venenatis condimentum id molestie erat. In viverra dignissim congue. Sed sit amet malesuada metus, ut egestas massa. Vivamus pretium, dui at hendrerit pharetra, nunc augue dignissim lorem, in suscipit tortor ligula quis tellus. Sed porttitor enim non faucibus facilisis. Phasellus accumsan tincidunt est, quis imperdiet mauris commodo vel. Aliquam erat volutpat. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Vestibulum vestibulum massa suscipit quam mollis, quis hendrerit quam tempor. In feugiat viverra condimentum. Donec volutpat est enim, ut malesuada libero pulvinar vel. In hac habitasse.#A

 Result
 0.0689


 */

#include <stdio.h>
#include <ctype.h>

//todo add full path
#define PATH "...\\text.txt"

void writeToFile() {
    FILE *f = fopen(PATH, "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
     writeToFile();
    // ....

    char c, c2;
    int count = 0, size = 0;

    scanf("%c", &c);
    c = tolower(c);

    FILE *f = fopen(PATH, "r");

    while ((c2 = fgetc(f)) != EOF) {
        c2 = tolower(c2);

        if (isalnum(c2)) {
            size++;
            if (c2 == c) {
                count++;
            }
        }
    }
    fclose(f);
    printf("%.4f", (float) count / (float) size);
}