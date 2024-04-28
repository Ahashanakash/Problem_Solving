#include<bits/stdc++.h>
using namespace std;
#define ll long long

int convert(string& s) {
    int ans = 0;

    for (char i : s) {
        
        ans = (ans << 1) + (i - '0');
    }
    return ans;
}

int main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s;cin>>s;
        ll val=convert(s);
        cout<<val<<endl;
        // if(val>100)cout<<"100"<<endl;
        // else cout<<s<<endl;
    }
return 0;
}