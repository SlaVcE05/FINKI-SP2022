# Задачи за вежбање за втор колоквиум / испит
## Zad.1
Дадена е текстуална датотека `text.txt`.

Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.

Пример: за датотеката:

IO is short for Input Output<br>
medioio medIo song

излез:

io<br>
ou<br>
io<br>
oi<br>
io<br>
io<br>
6

For example:

| Input                  | Result            |
|------------------------|-------------------|
| Why so serious? <br> # | io <br> ou <br> 2 |

<details><summary>Included code</summary>

```C
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int main() {
    
  writeToFile();
   
  // Vasiot kod zapocnuva od tuka
    


  return 0;
}
```
</details>

[`cede`](\zad_1.c)

---

## zad.2

Во дадена датотека `broevi.txt` се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.

For example:

| Input                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | Result                                                                                                                                                                               |
|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 9 783 493308 235452 54512 21055 406963 238857 412436 105422<br>13 403542 419503 80868 359387 261580 185590 395911 162138 67383 77614 69892 401246 288229<br>14 304712 410644 426231 379425 316565 238331 19975 106894 186458 87232 25590 15905 361939 243918<br>14 279986 269509 454513 279651 402478 102024 352123 2368 419681 175537 344481 245274 386202 253511<br>10 184003 373047 196320 23140 271386 258331 120056 7056 406853 495096<br>12 252925 76737 359079 327718 155198 91160 345660 484283 57435 132002 328732 204396<br>9 83955 182111 13934 259 475929 497406 199988 488479 36223<br>14 292656 375762 324259 182763 157996 232129 174662 383406 204707 489247 30978 295158 151592 273983<br>14 165728 53588 226975 499549 404240 480166 405416 209158 392604 414324 316692 38033 190455 353658<br>7 267346 451955 1650 237326 439703 144396 339916<br>15 394337 324355 390790 315316 210095 31972 231564 384467 381232 328605 479170 1138 254088 125861 80858<br>6 188500 250066 130499 445641 229614 448326<br>8 260542 343029 299849 479534 416032 400550 356613 275848<br>6 440170 26370 335351 404196 90373 351413<br>7 277986 366877 422447 247635 415753 95474 126662<br>9 231879 363144 332143 285817 181134 442024 246183 469572 447757<br>13 339474 249329 47214 20251 417072 245145 336733 145268 305273 304339 386339 266762 161026<br>7 386002 481418 178275 447464 300355 176770 448954<br>13 171186 397247 194399 60219 50293 436724 166095 85623 212362 183817 875 189220 59683<br>15 449180 371458 260639 375685 329595 383071 62070 96255 164039 349415 467864 264109 305256 216162 475478<br>0 | 783<br>80868<br>87232<br>454513<br>7056<br>91160<br>83955<br>489247<br>53588<br>451955<br>80858<br>445641<br>479534<br>90373<br>95474<br>442024<br>47214<br>481418<br>85623<br>96255 |

<details ><summary>Included code</summary>

```C
#include <stdio.h>
#include <string.h>
#define MAX 100

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
	
}
```

</details>

[`cede (N/A)`](\zad_2.c)