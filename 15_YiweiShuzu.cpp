#include<stdio.h>
#include<math.h>
int a[1005];//a[0]~a[1004]
int main(){
    int i,n,q;
    scanf("%d%d",&n,&q);
    for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
    }
    for(i=1;i<=q;i++){
            int l,r;
            scanf("%d%d",&l,&r);
            int sum=0;
            for(int j=l;j<=r;j++) sum+=a[j];
            printf("%d\n",sum);
    }
    return 0;
}
