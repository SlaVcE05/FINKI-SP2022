#include <stdio.h>

int cikcak(int b) {


    // 0 = b < 5
    // 1 = b >= 5
    int dir = -1;

    int tmp = b;

    while (tmp) {
        int b1 = tmp % 10;
//        int b2 = tmp / 10 % 10;

        if(dir == -1){
            dir = b1 < 5? 0:1;
            tmp /= 10;
            continue;
        }

        if(dir == 0){
            if(b1 < 5)
                return 0;
        }
        if(dir == 1){
            if(b1 >= 5)
                return 0;
        }

        dir = dir == 1? 0: 1;

        tmp /= 10;
    }


    return 1;

}

int main() {

    int br;

    while (scanf("%d", &br)) {

        if (br < 10)
            continue;

        if (cikcak(br) == 1)
            printf("%d\n", br);


    }

    return 0;
}