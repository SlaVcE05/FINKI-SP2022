#include <stdio.h>

/**

 
 peocent na br vneseni  z se  = z
 
*/

int main(){

    int z;
    int a = 0;
    int b = 0;

    int count = 0;

    int vkupno = 0;

    scanf("%d",&z);

    while(1){

        scanf("%d%d",&a,&b);

        if(a == 0 && b == 0)
            break;

        if(a + b == z)
            count++;

        vkupno++;

    }

    float p = (count / (vkupno * 1.0)) * 100;

    printf("Vnesovte %d parovi od broevi chij zbir e %d\nProcentot na parovi so zbir %d e %.2f%%",count,z,z,p);

    return 0;
}