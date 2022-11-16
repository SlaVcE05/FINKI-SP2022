#include <stdio.h>

int main(){

    int m;

    scanf("%d",&m);

    printf("%%");
    for(int i = 1; i < m -1; i++){
        printf("@");
    }
    printf("%%\n");

    for(int i = 1; i < m -1; i++){
        printf("%%");
        for(int j = 1; j < m-1; j++){
            printf(".");
        }
        printf("%%\n");
    }

    printf("%%");
    for(int i = 1; i < m -1; i++){
        printf("@");
    }
    printf("%%\n");
}