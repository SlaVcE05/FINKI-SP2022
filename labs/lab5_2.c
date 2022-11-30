#include <stdio.h>

int main(){

    int Ax,Ay,Cx,Cy;

    scanf("%d%d",&Ax,&Ay);
    scanf("%d%d",&Cx,&Cy);

    for(int i = 0; i < 2; i++){

        int x,y;

        scanf("%d%d",&x,&y);

        if(x >= Ax && x <= Cx && y >= Ay && y <= Cy)
            printf("DA\n");
        else printf("NE\n");

    }

    return 0;
}