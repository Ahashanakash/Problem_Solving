#include<bits/stdc++.h>
using namespace std;

int main (){
    string s;
    cin>>s;
    vector<int>c(26);

    for (int i = 0; i < s.size(); i++)
    {
        int a=(int) s[i]-'a';
        c[a]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (c[i]>0)
        {
            char cc=i+'a';
            cout<<cc<<" : "<<c[i]<<endl;
        }   
    }
return 0;
}