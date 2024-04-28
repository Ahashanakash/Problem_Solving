#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll x, n, m;
    cin >> x >> n >> m;
    if (x + m >= n)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}