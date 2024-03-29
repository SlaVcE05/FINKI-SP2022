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

[`cede`](zad_1.c)

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

[`cede`](zad_2.c)

---
## zad.3
Од тастатура во низа се внесуваат **N** позитивни цели броеви (**N** <= 100), а потоа се внесува и цел број **ind** (**ind** >= 0).

Да се напише функција `sum_pos` која ја прима низата, бројот **ind** (кој претставува индекс во низата) и бројот на валидни елементи во низата. Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс **ind** па се до крајот на низата. Ако индексот **ind** е поголем од **N**функцијата треба да врати 0.

НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор `[ ]`).

**Пример**<br>
влез:<br>
10<br>
2 4 6 8 1 3 9 12 33 44<br>
6<br>

излез:<br>
98

98 = 9+12+33+44

For example:

| Input                        | Result |
|------------------------------|--------|
| 6 <br> 2 1 66 100 1 2 <br> 5 | 2      |

[`cede`](zad_3.c)

---
## zad.4
Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата). Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (-5 во примерот на сликата).

Од стандарден влез се внесува матрица со димензии NxM (1 <= N, M < 100). Потоа се внесуваат два броеви кои претставуваат индекси на еден елемент од матрицата.

Да се најдат сумите на секој од квадрантите и да се испечатат на стандарен излез. Притоа се печати сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот. Доколку не може да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0.


For example:

| Input                         | Result   |
|-------------------------------|----------|
| 2 3 <br>5 7 8<br>1 2 3<br>1 1 | 15 5 1 5 |

[`cede`](zad_4.c)

---
## zad.5
Дадена е текстуална датотека (`livce.txt`) која претставува ливче во спортска обложувалница.

На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).

Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:<br>
ab12 1 1.25

Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).

Ваша задача е **да се испечати типот со најголем коефициент** како и **можната добивка на ливчето**. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

For example:

| Input                                | Result                |
|--------------------------------------|-----------------------|
| 100<br>ab12 1 1.2<br>c234 2 2.0<br># | c234 2 2.00<br>240.00 |

<details ><summary>Included code</summary>

```C
#include <stdio.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
	// vasiot kod pocnuva od ovde

	return 0;    

}
```
</details>

[`cede (N/A)`](zad_5.c)

---
## zad.8
Во дадена датотека `dat.txt` да се најде најдолгиот ред во кој има барем 2 цифри. На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.

Пример.

Влез:<br>
dat.txt:<br>
aaa123aa222aa2aaa23aaaaa22<br>
aaaaaaaaaaaa 23aaaa<br>
123 aaa aaa aaa aaa 12345 aaa aaa 2a<br>

Излез:<br>
123 aaa aaa aaa aaa 12345 aaa aaa 2

For example:

| Input                                                                                                                                                                                                                                                                                                                          | Result                                  |
|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------|
| aaa123aa222aa2aaa23aaaaa22 11112 222311111<br>aaa123aa222aa2aaa23aaaaa22 11112 aaaaaaaa1<br>aaa123aa222aa2aaa23aaaaa22 11112 2a23111a1<br>aaa123aa222aa2aaa23aaaaa22 11112 222311aa1<br>aaa123aa222aa2aaa23aaaaa22 11112 222311111<br>aaa123aa222aa2aaa21aa11122 11112 aaaa11111<br>1aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa | 123aa222aa2aaa21aa11122 11112 aaaa11111 |

<details ><summary>Included code</summary>

```C
#include <stdio.h>
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
	// vasiot kod ovde
    
    

}
```
</details>

[`cede`](zad_8.c)