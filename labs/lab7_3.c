#include <stdio.h>
#define MAX 100

int main(){

    int n;
    int a[MAX][MAX];
    int b[MAX][MAX];

    scanf("%d",&n);

    if(n % 2 != 0){
        printf("GRESKA");
        return 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }

    }
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){
            b[i][j] = a[i][j] + a[i][n-j-1] + a[n-i-1][j] + a[n-i-1][n-j-1];
        }

    }
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}