#include<stdio.h>

void func(int n,int i){
    if (i!=n)
    {
        printf("%d\n",i);
    }
    else printf("%d",i);
    
    if (i==n)return;
    else func(n,i+1);
    
}

int main(){
    int n;
    scanf("%d",&n);
    func(n,1);    
return 0;
}