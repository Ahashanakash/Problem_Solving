#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    while (n--)
    {
        char ch[100];
        scanf("%s",ch);
        int size=strlen(ch);
        int count=0;
        if (size>10)
        {
        count=size-2;
        printf("%c%d%c",ch[0],count,ch[size-1]);
        }
        else
        {
            printf("%s",ch);
        }
        printf("\n");
        
    }

return 0;
}