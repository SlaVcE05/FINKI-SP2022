#include <stdio.h>

int reverseNumber(int num){
    int rev=0;
    while(num)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    return rev;
}
int isPalindrome(int num){
    if(reverseNumber(num)==num)
        return 1;
    else
        return 0;
}
int containDigits(int num)
{
    while (num) {
        int n1 = num % 10;
        if(!(n1 == 0 || n1 == 1 || n1 == 2 || n1 == 3 || n1 == 4))
            return 0;
        num /= 10;
    }

    return 1;
}

int main(){

    int a, b;

    scanf("%d%d",&a,&b);

    for (int i = a; i < b; ++i) {

        if (containDigits(i) && isPalindrome(i))
            printf("%d\n",i);

    }
    return 0;

}