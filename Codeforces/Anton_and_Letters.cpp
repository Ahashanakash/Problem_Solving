#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<char> c;
    string s;
    getline(cin,s);
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i]>=97 && s[i]<=122)
        {
            c.insert(s[i]);
        }  
    }
    cout<<c.size();
    return 0;
}