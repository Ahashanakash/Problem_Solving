#include<stdio.h>

void func(int n){
    if (n!=1)
    {
        func(n-1);
    }
    printf("I love Recursion\n");
    
}

int main(){
    int n;
    scanf("%d",&n);
    func(n);
return 0;
}