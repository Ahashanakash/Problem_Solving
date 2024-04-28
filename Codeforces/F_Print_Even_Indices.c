#include<stdio.h>

void func(int arr[],int n,int i){
    if(i>=n)return;
    else func(arr,n,i+2);
    printf("%d ",arr[i]);
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    func(arr,n,0);
    
return 0;
}