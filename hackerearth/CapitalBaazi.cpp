#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    getline(cin,s);

    for (size_t i = 0; i<s.size(); i++)
    {
        s[i]=toupper(s[i]);
    }
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i]==' ')
        {
            cout<<endl;
        }
        else
        cout<<s[i];
    }
    
    

    return 0;
}