#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a=1;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i+1]==s[i])
        {
            a++;
            if (a==7)
            {
                cout<<"YES";
                break;
            }
        }
        else a=1;
    }
    if (a==1)
    {
        cout<<"NO";
    }
    return 0;
}