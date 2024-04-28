#include <bits/stdc++.h>
using namespace std;
#define ai for (int i = 0; i < n; i++) cin >> arr[i]
#define bi for (int i = 0; i < m; i++) cin >> brr[i]
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int arr[n], brr[m];
    ai;
    bi;
    ll l = 0, r = 0, ans = 0;
    while (l < n && r < m)
    {
        ll cnt1 = 0, cnt2 = 0, current = arr[l];
        while (arr[l] == current && l < n)
        {
            cnt1++;
            l++;
        }
        
        while (brr[r] < current && r < m) r++;
        
        while (brr[r] == current && r < m)
        {
            cnt2++;
            r++;
        }
        ans += (cnt1 * cnt2);
    }
    cout << ans << '\n';

    return 0;
}