#include<stdio.h>
int main(){
    int a = 2;
    int b = 3;
    double c = (double)a;
    double cc = (double)b;
    double d = 1.2;
    double e = 1.4;
    double f = d + e;
    printf("a=%d b=%d aa=%lf\n",a,b,b*1.0/a);
    printf("%.2lf\n",f);
    long long g = 2;
    long long h = 5;
    long long i = g * h;
    printf("%lld\n",i);
    char q = 'a';
    printf("%lc",q);
    return 0;
}
/*
1.int -2*10^9~2*10^9
2.long long 9*10^18
3.double 小数浮点数
*/
