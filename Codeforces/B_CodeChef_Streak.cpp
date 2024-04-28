#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll so = 0, om = INT_MIN, sa = 0, am = INT_MIN;
        vector<ll> Om(n);
        for (int i = 0; i < n; i++)
        {
            cin >> Om[i];
            if (Om[i] == 0)
                so = 0;
            else
                so++;
            om = max(om, so);
        }
        vector<ll> add(n);
        for (int i = 0; i < n; i++)
        {
            cin >> add[i];
            if (add[i] == 0)
                sa = 0;
            else
                sa++;
            am = max(am, sa);
        }
        if (am == om)
            cout << "Draw" << '\n';
        else if (am > om)
            cout << "Addy" << '\n';
        else
            cout << "Om" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}