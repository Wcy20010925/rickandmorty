#include<stdio.h>
int main(){
    int n,x;
    int a,b,c;
    scanf("%d",&n);
    a=n/100;
    c=n%10;
    b=(n/10)%10;
    x=a+b+c;
    if(x%2==0){
        if(x%10==0) printf("A\n");
        else printf("B\n");
    }
    else printf("C\n");
    return 0;
}
/*
一个三位数a
1.若数位和是2的倍数，且能被10整除，输出A
2.若数位和是2的倍数，不能被10整除，输出B
3.若数位和不是2的倍数输出C
*/
