#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >=1; j--)
        {
            printf(" ");
        }
        for (int m = 1; m <=k; m++)
        {
            printf("*");
        }
        s--;
        k+=2;
        printf("\n");
        
    }
    s++;
    k-=2;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j <=s; j++)
        {
            printf(" ");
        }
        for (int m = k; m >=1; m--)
        {
            printf("*");
        }
        s++;
        k-=2;
        printf("\n");
    }

return 0;
}