#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s= "I hate ";
    string s_even = "that I love ";
    string s_odd = "that I hate ";
    for (size_t i = 2; i <=n; i++)
    {
        (i%2==0) ? s=s+s_even : s=s+s_odd;
    }
    cout<<s<<"it";
    return 0;
}