#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if (a<b && b!=0)
    {
        if (b-a==1)
        {
            cout<<"YES";
        }
        else cout<<"NO";
        
    }
    else if (a==b && b!=0)
    {
        cout<<"YES";
    }
    else if (a>b && a-b==1)
    {
        cout<<"YES";
    }
    
    else cout<<"NO";
    
    return 0;
}