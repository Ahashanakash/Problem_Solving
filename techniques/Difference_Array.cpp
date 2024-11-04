#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n + 1), difference_array(n + 2); // need extra 2 values for differrence array
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll left, right, add_value;
        cin >> left >> right >> add_value;
        difference_array[left] += add_value;
        difference_array[right + 1] -= add_value;
    }
    for (int i = 1; i <= n; i++)
    {
        difference_array[i] += difference_array[i - 1];
        arr[i] += difference_array[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}