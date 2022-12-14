//Од стандарден влез се чита цел број n. Потоа се вчитуваат n низи од цели броеви (со максимална должина од 100 елементи),
// при што за секоја прво се внесува должината на низата, а потоа сите елементи на низата


#include <stdio.h>
#define MAX 100

int main(){

    int n;

    scanf("%d",&n);

    for (int i = 0; i < n; ++i) {

        int a[MAX];
        int nn;
        int k;

        scanf("%d",&nn);

        for (int j = 0; j < nn; ++j) {

            scanf("%d",&a[j]);

        }

        scanf("%d",&k);


        for (int j = k-1; j < nn; j = j + k) {
            int tmp = a[j-1];
            a[j-1] = a[j];
            a[j] = tmp;

        }


        for (int j = 0; j < nn; ++j) {
            printf("%d ",a[j]);
        }
        printf("\n");

    }

    return 0;
}