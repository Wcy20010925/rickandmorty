/*
�󷽳�ax+by+cz+d=0�Ľ⣬���޽����-1���ж�������xС�ģ�xһ�����yС�ģ�yһ�µĻ����zС��
*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int flag=0;
    int i,j,k;
    for(i=-100;i<=100;i++){ //������x�ķ�Χ������ÿһ��x�ڵ�ǰx����y
        for(j=-100;j<=100;j++){ //��ȥ��z
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
