#include <stdio.h>

int main(){

    int z = 0;
    char c;
    int tmpB = 0;


    while(1){
        scanf("%c",&c);
        if(c == '!'){
            z += tmpB;
            break;
        }

        int num = -1;

        switch(c){

            case '0':
                num = 0;
                break;
            case '1':
                num = 1;
                break;
            case '2':
                num = 2;
                break;
            case '3':
                num = 3;
                break;
            case '4':
                num = 4;
                break;
            case '5':
                num = 5;
                break;
            case '6':
                num = 6;
                break;
            case '7':
                num = 7;
                break;
            case '8':
                num = 8;
                break;
            case '9':
                num = 9;
                break;
            default: num = -1;
        }
        if (num != -1)
            tmpB = tmpB * 10 + num;
        else {
            z += tmpB;
            tmpB = 0;
        }



    }
    printf("%d",z);

    return 0;
}