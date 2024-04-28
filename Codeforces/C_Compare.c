#include<stdio.h>
#include<string.h>
int main(){
    char s1[21];
    scanf("%s",s1);
    char s2[21];
    scanf("%s",s2);
    int r=strcmp(s1,s2);
    if (r>0)
    {
        printf("%s",s2);
    }
    else if (r<0)
    {
        printf("%s",s1);
    }
    else printf("%s",s2);
    
return 0;
}