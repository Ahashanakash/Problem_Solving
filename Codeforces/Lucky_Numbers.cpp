#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,c,d;
    cin>>a;
    c=a/10;
    d=a%10;
    if (d%c==0 || c%d==0)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    
    return 0;
}