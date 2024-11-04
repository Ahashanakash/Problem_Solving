#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    ll n, minus_count = 0;
    cin >> n;
    vector<ll> arr(n), v; //a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        //a[i] = arr[i];
        if (arr[i] < 0)
            minus_count += 1;
    }
    v = arr;
    sort(v.begin(), v.end());
    if (v == arr)
    {
        cout << "YES" << '\n';
        return;
    }
    for (int i = 1; i < minus_count; i++)
    {
        if (abs(arr[i - 1]) < abs(arr[i]))
        {
            cout<<"NO"<<'\n';
            return;
        }
    }
    for (int i = minus_count; i < n-1; i++)
    {
        if(abs(arr[i]) > abs(arr[i+1])){
            cout<<"NO"<<'\n';
            return;
        }
    }
    cout<<"YES"<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}