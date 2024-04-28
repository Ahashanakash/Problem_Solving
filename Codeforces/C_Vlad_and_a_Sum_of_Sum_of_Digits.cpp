#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define all_op() cin.tie(0);cout.tie(0);
#define sp ' '
#define endl '\n'
const long double pi=acos(-1);
typedef long long int ll;
typedef long double ld;
long long int dx[]= {0,0,+1,-1,+1,+1,-1,-1};
long long int dy[]= {+1,-1,0,0,+1,-1,+1,-1};

int main()
{
    optimize();
    ll _=1;
    cin >> _;
    vector<ll>f(2e5+10,0);
    for(ll i=1;i<=200005;i++)
    {
        ll cnt=0,x=i;
        while(x>0)
        {
            cnt+=(x%10);
            x/=10;
        }
        f[i]=f[i-1]+cnt;
    }
    while(_--)
    {
        ll n; cin >> n;
        cout << f[n] << endl;
    }
    return 0;
}