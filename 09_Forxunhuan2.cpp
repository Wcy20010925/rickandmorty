#include<stdio.h>
int main(){
    int x;
    long long sum=0;
    int n,i,k;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i=i+1){
        scanf("%d",&x);
        if(x>k){
            sum++;
        }
    }
    printf("%lld",sum);
    return 0;
}

/*
��n���������ж��ٸ���k�����
*/
