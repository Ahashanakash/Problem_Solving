#include<bits/stdc++.h>
using namespace std;
int main (){
    string s,s1,word;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++){(isalpha(s[i])) ? s1.push_back(s[i]) : s1.push_back(' ');}
    stringstream ss(s1);
    int cnt=0;
    while (ss>>word) cnt++;
    cout<<cnt;
    s.clear();
    s1.clear();
    word.empty();
return 0;}