#include <stdio.h>
#define MAX 100

int check(int a[], int n){
    int length1 = 1;
    int length2 = 1;
    int count = 0;


    for (int i = 0; i < n; ++i) {
        if(a[i] < a[i+1]){
            length2++;
            if (!count)
                count = 1;
        } else{
            if(length2 > length1)
                length1 = length2;
            length2 = 1;
            if (count)
                count = 0;
        }

    }
    return length1;
}

int main() {
    int n;
    int matrica[MAX][MAX];
    int length = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&matrica[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {

        int length1 = check(matrica[i],n);

        if(length1 > length)
            length = length1;
    }
    printf("%d",length);
    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    int i, n, a[MAX], k;


    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);


    for (i = 0; i < n; i++) {
        if (a[i] < k)
            printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++) {
        if (a[i] >= k)
            printf("%d ", a[i]);
    }
    return 0;
}*/