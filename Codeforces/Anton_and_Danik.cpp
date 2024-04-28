#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,anik=0,dp=0;
    string s;
    cin>>n>>s;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i]=='A')
        {
            anik++;
        }
        else
        dp++;
        
    }
    if (anik>dp)
    {
        cout<<"Anton";
    }
    else if (dp>anik)
    {
        cout<<"Danik";
    }
    else if (dp==anik)
    {
        cout<<"Friendship";
    }
    
    
    return 0;
}