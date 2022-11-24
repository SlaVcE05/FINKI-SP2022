//#include <stdio.h>
//
//
//int main(){
//
//    int a,b;
//
//    scanf("%d%d",&a,&b);
//
//
//    if(a <= 0 || b <= 0 ){
//        printf("Invalid input");
//        return 0;
//    }
//
//    if(a > b){
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//
//    int tmp = b / 10;
//    int tmp2 = a;
//
//    while(tmp2){
//
//        if(tmp % 10 != tmp2 % 10){
//            printf("NE");
//            return 0;
//        }
//
//        tmp /= 100;
//        tmp2 /= 10;
//    }
//
//    printf("PAREN");
//
//    return 0;
//}

#include <stdio.h>




int check(int b){



}


int main(){

    int N, X;

    int nums[100];

    int i_num = 0;

    int tmp;

    scanf("%d%d",&N,&X);

    int tmp_x = X;

    while(tmp_x){

        nums[i_num] = tmp_x % 10;

        i_num++;
        tmp_x / 10;
    }


    while(N){
        N--;

        tmp = N;

        while(tmp){
            check(tmp % 10);

            tmp / 10;
        }


    }




    return 0;
}