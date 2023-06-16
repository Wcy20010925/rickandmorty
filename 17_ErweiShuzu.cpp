#include<stdio.h>
#include<math.h>
#include<string.h>
int a[105][105];
int main(){
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){//旋转90度n行变成了m行
        for(j=n-1;j>=0;j--){//观察可知列是从n-1开始的可以自己标注每个数位置0,0;0,1这样子
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}

/*
把矩阵顺时针旋转90度
例如
1 2 3 4
5 6 7 8
9 10 11 12
////
9 5 1
2 6 10
3 7 11
4 8 12
如何用循环实现？

*/
