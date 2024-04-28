#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int d1=0,d2=0;
    for (int i = 0; i < n; i++)
    {
        d1=d1+arr[i][i];
        d2=d2+arr[i][n-1-i];
    }
    int result=abs(d1-d2);
    printf("%d",result);
    
return 0;
}