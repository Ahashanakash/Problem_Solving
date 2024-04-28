#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, target;
    cin >> n >> target;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll left = 0, right = n - 1, mid, ans = -1;

    while (left <= right)
    {
        mid = left + ((right-left)>>1);

        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    if (ans == -1)
    {
        cout << "Not found" << '\n';
    }
    else
    {
        cout << ans << "th position" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}