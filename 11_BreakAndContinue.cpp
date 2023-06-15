#include<stdio.h>
int main(){
    int x,n;
    int t;
//    scanf("%d",&t);
//    while(t--){
//        scanf("%d%d",&x,&n);
//        int sum=0;
//        while(1){
//            if(x>n){
//                break;
//        }
//        x=x*2+1;
//        sum++;
//    }
//    printf("%d\n",sum);
//    }
    int i;
    int sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(x%5==0) continue;
        sum = sum+x;

    }
    printf("%d\n",sum);
    return 0;

}
/*
1.给你一个数字x，每一次可以让x变为x*2+1，问至少多少次能不小于n
2.给n个数，求这n个数中不是5的倍数的所有数的和
*/
