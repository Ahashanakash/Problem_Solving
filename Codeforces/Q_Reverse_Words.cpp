#include<bits/stdc++.h>
using namespace std;

int main (){
    string s,word;
    getline(cin,s);
    stringstream ss(s);
    ss>>word;
    reverse(word.begin(),word.end());
    cout<<word;
    while (ss>>word)
    {
        reverse(word.begin(),word.end());
        cout<<" "<<word;
    }
    
return 0;
}