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
1 ѭ�������ĳ�ʼ����
2 ѭ��ִ�е�����
3 ѭ������ÿһ�ε����ı仯
��ѭ������ѭ���������仯�˾ͻ�һֱִ��

��n�����ĺ�

*/
