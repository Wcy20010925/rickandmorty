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
һ����λ��a
1.����λ����2�ı��������ܱ�10���������A
2.����λ����2�ı��������ܱ�10���������B
3.����λ�Ͳ���2�ı������C
*/
