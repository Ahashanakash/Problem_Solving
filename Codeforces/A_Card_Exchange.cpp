#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        map<ll, ll> freq;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            freq[x]++;
        }
        if (n < k)
            cout << "1\n";
            else if(n==k)
        else
        {
            bool shuffle = false;
            for (auto it = freq.begin(); it != freq.end(); it++)
            {
                if ((it->second) >= k)
                {
                    shuffle = true;
                    break;
                }
            }
            if (shuffle)
                cout << k - 1 << '\n';
            else
                cout << n << '\n';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
