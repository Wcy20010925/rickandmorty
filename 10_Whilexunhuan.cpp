/*
��һ����������������ж���λ����λ��
����֪��ִ�ж��ٴΣ�ֻҪ����������ִ��������while
*/
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int x;
    int sum=0;
    int ans=0;
    int n,i,k;
    scanf("%d",&n);
    while(n!=0){
       ans=ans+n%10;
       n=n/10;
       sum++;
    }
//    for(;n!=0;n=n/10){
//        ans=ans+n%10;
//        sum++;
//    }

    printf("%d\n%d\n",sum,ans);
    }
    return 0;

}
