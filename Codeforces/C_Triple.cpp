#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int fr[n + 1] = {0};
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            fr[arr[i]]++;
            if (fr[arr[i]] >= 3)
                mx = arr[i];
        }
        cout << mx << endl;
    }

    return 0;
}