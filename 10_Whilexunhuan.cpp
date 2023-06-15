/*
给一个数，求这个数字有多少位和数位和
并不知道执行多少次，只要满足条件就执行所以用while
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
