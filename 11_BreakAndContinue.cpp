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
1.����һ������x��ÿһ�ο�����x��Ϊx*2+1�������ٶ��ٴ��ܲ�С��n
2.��n����������n�����в���5�ı������������ĺ�
*/
