#include<stdio.h>

long long func(long long arr[],long long n,long long i){
    if (i>=n)return 0;
    return arr[i] + func(arr,n,i+1);    
}
int main(){
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long result=func(arr,n,0);
    printf("%lld",result);
    
return 0;
}