#include<bits/stdc++.h>
using namespace std;

#define ll long long


void solve()
{
    int t;
    cin>>t;
    vector<ll>v;
    for (ll i = 1; i <= 100001; i++)
    {
        v.push_back(pow(i,3));
    }
    while(t--)
    {
        ll x;
        cin>>x;
        bool flag=false;
        for (int i = 1; i <= 10001; i++)
        {
            ll ac=pow(i,3);
            if(binary_search(v.begin(),v.end(),(x-ac)))
            {
                flag=true;
                break;
            }
        }
        if(flag)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}
int main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    solve();
return 0;
}