#include<stdio.h>
int main(){
    char ch;
    int cnt[26]={0};
    while (scanf("%c",&ch)!=EOF)
    {
        cnt[ch-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i]!=0)
        {
            printf("%c : %d\n",i+97,cnt[i]);
            cnt[i]=0;
        }   
    }
return 0;
}