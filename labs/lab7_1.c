#include <stdio.h>
#define MAX 100

int main(){

    int a[MAX][MAX];

    int n;

    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }


    for(int i = 0; i < n; i++){

        a[i][i] *= -1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}