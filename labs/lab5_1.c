#include <stdio.h>


int main(){

    int n;

    scanf("%d",&n);

    for(int i = 0; i < n; i++){

        int b;

        scanf("%d",&b);

        switch(b % 5){
            case 0:
                printf("-----");
                break;
            case 1:
                printf(".----");
                break;
            case 2:
                printf("..---");
                break;
            case 3:
                printf("...--");
                break;
            case 4:
                printf("....-");
                break;


        }
        printf("\n");

    }


    return 0;
}