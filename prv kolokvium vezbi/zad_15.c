#include <stdio.h>


int main() {

    int polozeni[1000];
    int padnati[1000];

    int polozeniB;
    int padnatiB;

    int zbirPadnati;
    int zbirPolozeni;

    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int poeni;
        scanf("%d", &poeni);

        if (poeni < 50) {
            padnati[padnatiB] = poeni;
            padnatiB++;
            zbirPadnati += poeni;
        } else {
            polozeni[polozeniB] = poeni;
            polozeniB++;
            zbirPolozeni += poeni;
        }
    }

    float prosekPadnati = zbirPadnati / (float) padnatiB;
    float prosekPolozeni = zbirPolozeni / (float) polozeniB;

    printf("Sredna vrednost na padnati %.2f\n", prosekPadnati);

    for (int i = 0; i < padnatiB; ++i) {
        printf("%d ", padnati[i]);
    }
    printf("\nSredna vrednost na polozeni %.2f\n", prosekPolozeni);

    for (int i = 0; i < polozeniB; ++i) {
        printf("%d ", polozeni[i]);
    }

    return 0;
}