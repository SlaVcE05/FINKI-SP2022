#include <stdio.h>

int main(){
    int n;
    int nb = 0;

    scanf("%d",&n);

    if(n < 9){
        printf("Brojot ne e validen");
        return 0;
    }

    for(int i = 9; i < n; i++){
        int tmp = i;

        int ob = 0;
        int bc = 0;
        while(tmp){
            ob = ob * 10 + (tmp % 10);
            tmp /= 10;
            bc++;
        }

        if (ob % bc == 0 && nb < i){
            nb = i;
        }

    }

    printf("%d",nb);

    return 0;
}
