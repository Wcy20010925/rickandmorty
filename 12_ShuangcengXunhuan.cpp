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
1.��ӡһ��n*m�ľ���
2.��ӡһ��n�е�ֱ��������
*
**
***
****
*****

3.������1��r�ж��ٸ�����
4.��ax+by+cz+d=0���̵Ľ⣬�޽����-1��
*/
