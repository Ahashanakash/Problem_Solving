#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, l;
        cin >> n >> k >> l;
        ll ans = 0;

        vector<ll> v(0);
        while (n--)
        {
            ll m, li;
            cin >> m >> li;
            if (li == l)
            {
                v.push_back(m);
            }
        }
        sort(v.rbegin(), v.rend());
        if (k > v.size())
        {
            cout << "-1" << '\n';
            continue;
        }
        for (int i = 0; i < k; i++)
        {
            ans = ans + v[i];
        }

        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}