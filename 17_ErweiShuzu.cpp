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
    for(i=0;i<m;i++){//��ת90��n�б����m��
        for(j=n-1;j>=0;j--){//�۲��֪���Ǵ�n-1��ʼ�Ŀ����Լ���עÿ����λ��0,0;0,1������
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}

/*
�Ѿ���˳ʱ����ת90��
����
1 2 3 4
5 6 7 8
9 10 11 12
////
9 5 1
2 6 10
3 7 11
4 8 12
�����ѭ��ʵ�֣�

*/
