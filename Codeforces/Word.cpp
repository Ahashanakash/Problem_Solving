#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int c=0,sm=0;
    cin>>s;
    for (size_t i = 0; i < s.size(); i++)
    {if (s[i]<=90)
        {c++;}
        else if (s[i]<=122)
        {sm++;} 
    }
    if (c>sm)
    {for (size_t i = 0; i < s.size(); i++)
        {s[i]=toupper(s[i]);}
    }
    else if (sm>=c)
    {for (size_t i = 0; i < s.size(); i++)
        {s[i]=tolower(s[i]);}
    }
    cout<<s;
    return 0;
    }