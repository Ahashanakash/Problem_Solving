#include<stdio.h>

void func(int n){
    if (n==0) return;
    func(n/10);
    printf("%d ",n%10);
}

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if (n==0)
        {
            printf("0");
        }
        else func(n);
        printf("\n");
    }
    
return 0;
}