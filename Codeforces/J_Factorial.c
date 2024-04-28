#include<stdio.h>

long long func(long long n, long long ans){
    if(n==0) return ans;
    ans=ans*n;
    return func (n-1,ans);
}

int main(){
    long long n,ans=1;
    scanf("%lld",&n);
    long long a = func(n,ans);
    printf("%lld",a);
return 0;
}