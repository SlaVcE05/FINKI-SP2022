#include <stdio.h>

int main(){
    int m,n;
    int bb;
    int isBB = 0;

    scanf("%d%d", &m, &n);

    bb = n;

    for(int i = m; i <= n; i++){
        int tmp = i;

        isBB = 0;

        while(tmp){
            if((tmp % 10) % 2 != 0){
                isBB = 0;
                break;
            }

            tmp /= 10;
            isBB = 1;
        }

        if (isBB && i<bb){
            bb = i;
        }

    }

    if(bb % 2 == 0)
        printf("%d\n",bb);
    else printf("NE");


}
