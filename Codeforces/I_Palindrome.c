#include<stdio.h>
#include<string.h>
int main(){
    char ch[10001];
    scanf("%s",ch);
    int i=0,j=strlen(ch)-1;
    while (i<j)
    {
        if (ch[i]!=ch[j])
        {
            printf("NO");
            return 0;
        }
        i++;
        j--;
    }
    printf("YES");
    
return 0;
}