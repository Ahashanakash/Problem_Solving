#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;
        ll i = 2;
        while (i <= n)
        {
            i += 7;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}