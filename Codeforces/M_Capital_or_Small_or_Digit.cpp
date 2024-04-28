#include<stdio.h>
int main(){
   char c;
   scanf("%c",&c);
   if (c>='a'&&c<='z')
   {
    printf("ALPHA\nIS SMALL");
   }
   else if (c>='A'&&c<='Z')
   {
    printf("ALPHA\nIS CAPITAL");
   }
   else if (c>='0'&&c<='9')
   {
    printf("IS DIGIT");
   }
return 0;
}