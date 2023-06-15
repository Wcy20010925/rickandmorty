#include<stdio.h>
int main()
{
//   int i,j,n,m;
//    scanf("%d%d",&n,&m);
//    for(i=1;i<n;i++){
//        for(int j=1;j<=m;j++){
//            printf("*");
//        }
//        printf("\n");
//   }
    int n,m;
    scanf("%d%d",&n,&m);
    int i;

    for(i=1;i<=n;i++){
        int j=1;
        while(j<=m){
            printf("*");
            j++;
        }

        printf("\n");
    }
    return 0;
}
/*
1.打印一个n*m的矩阵
2.打印一个n行的直角三角形
*
**
***
****
*****

3.求区间1到r有多少个素数
4.求ax+by+cz+d=0方程的解，无解输出-1，
*/
