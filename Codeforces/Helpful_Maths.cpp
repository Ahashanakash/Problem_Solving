#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,s1;
    cin>>s;
    vector<int> v;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i]!='+')
        {
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end(),less<int>());

    for (size_t i = 0; i < v.size(); ++i)
    {
        s1.push_back(v[i]);
        s1.push_back('+');
    }
    s1.pop_back();
    cout<<s1;

    return 0;
}