#include <stdio.h>

int main(){

    int n;
    int nb = 0,b = 0;
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {

        int z = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0){
                z = z + j;
            }
        }
        if (nb < z){
            nb = z;
            b = i;
        }
    }

    printf("%d\n",b);



}