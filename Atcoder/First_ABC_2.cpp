#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,m;
    string s,t;
    cin>>n>>m>>s>>t;
    if (s==t)
    {
        cout<<"0";
        return 0;
    }
    else if (t.find(s)==string::npos)
    {
        cout<<"3";return 0;
    }
    else if (t.find(s)!=string::npos)
    {
        for (size_t i = 0; i < n; i++)
        {
            if (s[i]==t[i])
            {
                
            }
            
        }
        
    }
    

    
return 0;
}