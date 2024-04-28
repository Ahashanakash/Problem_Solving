#include<stdio.h>

void line(int n){
    for (int i = 1; i < n; i++)
    {
        printf("%d ",i);
    }
    printf("%d",n);
}
int main(){
    int n;
    scanf("%d",&n);
    line(n);
return 0;
}