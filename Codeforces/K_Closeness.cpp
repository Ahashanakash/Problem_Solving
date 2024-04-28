#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] %= k;
        }
        sort(arr.begin(), arr.end());
        ll dif = arr[n - 1] - arr[0];
        for (size_t i = 0; i < n - 1; i++)
        {
            if (arr[i] - arr[i + 1] + k < dif)
                dif = arr[i] - arr[i + 1] + k;
        }
        cout<<dif<<'\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}