#include <stdio.h>
#define MAX 100



int main(){

    int m, n;

    int a[MAX][MAX];


    scanf("%d%d",&m,&n);

    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            int num;

            scanf("%d",&num);

            a[i][j] = num;
        }
    }

    float zz[MAX][MAX];
    for(int i = 0; i < n; i++){

        int min = a[0][i];
        int max = a[0][i];


        for(int j = 1; j < m; j++){


            if(a[j][i] < min){
                min = a[j][i];
            }
            if(a[j][i] > max){
                max = a[j][i];
            }


        }



        for(int j = 0; j < m; j++){
            int num = a[j][i];

            float num1 = (float)(num - min)/(float)(max - min);

            zz[j][i] = num1;

        }

    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%.2f ", zz[i][j]);
        }
        printf("\n");
    }

}