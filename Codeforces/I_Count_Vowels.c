#include<stdio.h>
#include<ctype.h>
#include<string.h>

int func(char ch[],int i,int sum){
    
    if (ch[i]=='\0') return sum;
    else if (ch[i]=='a' || ch[i]=='e' ||ch[i]=='i' ||ch[i]=='o' ||ch[i]=='u')
    {
        sum++;
    }
    i++;
    return func(ch,i,sum);
    
}

int main(){
    char ch[201];
    fgets(ch,201,stdin);
    
    for (int i = 0; i < strlen(ch); i++)
    {
        ch[i]=tolower(ch[i]);
    }
    int sum=0,i=0;
    int n = func(ch,i,sum);
    printf("%d",n);

return 0;
}