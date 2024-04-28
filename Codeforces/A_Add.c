#include<stdio.h>

int sum(int a,int b){
    return (a+b);
}
int main(){
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    int ans=sum(a,b);
    printf("%d",ans);
return 0;
}