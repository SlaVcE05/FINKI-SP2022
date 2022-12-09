#include <stdio.h>
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
}