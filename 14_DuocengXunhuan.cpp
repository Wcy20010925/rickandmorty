/*
求方程ax+by+cz+d=0的解，若无解输出-1，有多个解输出x小的，x一致输出y小的，y一致的话输出z小的
*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int flag=0;
    int i,j,k;
    for(i=-100;i<=100;i++){ //代表了x的范围，对于每一个x在当前x下跑y
        for(j=-100;j<=100;j++){ //再去跑z
            for(k=-100;k<=100;k++){
                if(a*i+b*j+c*k+d==0){
                    printf("%d %d %d\n",i,j,k);
                    flag = 1;
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==1) break;
    }
    if(flag==0)printf("-1\n");
    return 0;
}
