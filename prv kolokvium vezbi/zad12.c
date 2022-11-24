#include <stdio.h>

int main(){

    int br;
    int p0,p1,p2,p3,p4;

    p0 = p1 = p2 = p3 = p4 = 0;



    while (scanf("%d",&br)){

        int nbp = 0;
        int nb = 0;

        int tmp = br;
        int pos = 0;
        while (tmp){
            int b = tmp % 10;

            if(b > nb){
                nb = b;
                nbp = pos;
            }


            pos++;

            tmp /= 10;
        }

        switch (nbp) {
            case 0:
                p0++;
                break;
            case 1:
                p1++;
                break;
            case 2:
                p2++;
                break;
            case 3:
                p3++;
                break;
            case 4:
                p4++;
                break;

        }


    }

    printf("0: %d\n"
           "1: %d\n"
           "2: %d\n"
           "3: %d\n"
           "4: %d",
           p0,p1,p2,p3,p4);




    return 0;
}
