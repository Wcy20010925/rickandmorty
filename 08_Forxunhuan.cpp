#include<stdio.h>
int main(){
//    int i,sum=0;
//    //for(1;2;3)
//    for(i=1;i<=10000;i+=1){
//        sum =sum+i;
//    }
//    printf("%d\n",sum);
    int x;
    int sum=0;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        sum=sum+x;
    }
    printf("%d\n",sum);
    return 0;
}
/*
1 循环变量的初始条件
2 循环执行的条件
3 循环变量每一次递增的变化
死循环就是循环变量不变化了就会一直执行

求n个数的和

*/
