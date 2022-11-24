#include <stdio.h>


int cikcak(int br){

    int tmp  = br;

    //b1 < b2 dir = 0;
    //b1 > b2 dir = 1;

    int dir = -1;
    int pos = 0;

    while (tmp){

        if (tmp / 10 == 0)
            return 1;

        int b1 = tmp % 10;
        int b2 = tmp % 100 / 10;

        if(b1 == b2)
            return 0;

        if (dir == -1){
            dir = b1 < b2? 0 : 1;
            pos = 1;
            tmp /= 10;
            continue;
        }

        if (dir == 0){
            if((pos % 2 != 0)?(b1<= b2) :(b1 >= b2))
                return 0;
        }

        if(dir == 1){
            if((pos % 2 != 0)?(b1 >= b2):(b1<= b2))
                return 0;
        }
        tmp /= 10;
        pos++;
    }
    return 1;


}

int main(){
    int br;


    while (scanf("%d",&br)){

        if (br < 10)
            continue;

        int check = cikcak(br);

        if(check == 1)
            printf("%d\n",br);

    }

    return 0;
}

