#include <stdio.h>

int main(){

    int br;

    int lastMax = 0;

    while (scanf("%d",&br)){

        int sum = 0;
        int max = 0;

        int tmp = br;
        while (tmp){

            int b = tmp % 10;
            sum += b;
            if (b > max)
                max = b;


            tmp /= 10;
        }

        printf("%d: %d\n",br,sum + lastMax);

        lastMax = max;

    }

    return 0;
}