#include<stdio.h>
#include<math.h>
int main(){
    int l,r;
    scanf("%d%d",&l,&r);
    int i,k;
    int sum =0;
    int flag;
    for(k=l;k<=r;k++){
        flag=0;
        for(i=2;i<=sqrt(k);i++){
            if(k%i==0) {
                flag=1;
                break;
            }
        }
        if(flag==0) sum++;
    }
    printf("%d\n",sum);
    return 0;
}

/*
求区间1到r有多少个素数
*/
