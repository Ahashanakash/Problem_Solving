#include<bits/stdc++.h>
using namespace std;

int main (){
    //ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    int num=s[0]-'0';
    if (num>4 && num!=9)
    {
        s[0]=(9-num)+'0';
    }
    for (size_t i = 1; i < s.size(); i++)
    {
        int num=s[i]-'0';
        if (num>4)
        {
            s[i]=(9-num)+'0';
        }
    }
    cout<<s;
    
return 0;
}