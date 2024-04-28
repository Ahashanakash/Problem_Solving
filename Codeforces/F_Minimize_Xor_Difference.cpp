#include<bits/stdc++.h>
using namespace std;

#define ll long long


void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll x=LLONG_MAX;
        for (int i = 0; i <= 100; i++)
        {
            x=min(x,abs((a^i)-(b^i)));
        }
            cout<<x<<'\n';
    }
}
int main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    solve();
return 0;
}