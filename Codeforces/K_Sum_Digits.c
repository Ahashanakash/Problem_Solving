#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    int sum=0;
    for (int i = 0; i < strlen(s); i++)
    {
        sum=sum+(s[i]-'0');
    }
    printf("%d",sum);
    
return 0;
}