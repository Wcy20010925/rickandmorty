#include<stdio.h>
#include<math.h>
#include<string.h>
char a[100005];
char b[100005];
int main(){
//    scanf("%s",a); �����ж��ַ�������
//    printf("%s\n",a);+

//    int len=strlen(a);
//    printf("%d\n",len);
//    int sum=0;
//    char q='a';
//    char w='b';
//    printf("%d %d",q,w);
//    for(int i=0;i<len;i++){
//        if(a[i]=='a') sum++;
//    }
//    printf("%d\n",sum);
    scanf("%s%s",a,b);
    int len=strlen(a);
    printf("%d\n",len);
    int sum=0;
    if(!strcmp(a,b)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
/*
abcd' \0
\0�����ַ�������������\0�����볤��
*/
