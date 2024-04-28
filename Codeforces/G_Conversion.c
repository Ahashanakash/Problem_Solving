#include<stdio.h>
#include<string.h>
int main(){
    char ch[1000001];
    scanf("%s",ch);
    for (int i = 0; i <strlen(ch) ; i++)
    {
        if (ch[i]>64 && ch[i]<91)
        {
            printf("%c",ch[i]+32);
        }
        else if (ch[i]>96 && ch[i]<123)
        {
            printf("%c",ch[i]-32);
            
        }
        else if (ch[i]==',')
        {
            printf(" ");
        }
        
        
    }
    
return 0;
}