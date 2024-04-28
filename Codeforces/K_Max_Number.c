#include<stdio.h>
#include<limits.h>

int max(int arr[],int n,int i){
    if (i==n) return INT_MIN;
    
    int mx=max(arr,n,i+1);
    if (mx>arr[i])
    {
        return mx;
    }
    else return arr[i];
    
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans= max(arr,n,0);
    printf("%d",ans);
    
return 0;
}