#include <stdio.h>

int main() {

    int N, X;
    int tmp;

    scanf("%d%d", &N, &X);


    int check = 0;
    N--;

    for (; N > 0; N--) {
        check = 0;
        for (int j = N; j > 0; j /= 10) {
            for (int k = X; k > 0; k /= 10) {
                if (j % 10  == k %10)
                    check = 1;
            }
        }
        if (!check)
            break;

    }

    printf("%d", N);


    return 0;
}


