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
        string s;
        cin >> s;
        int l = 0, r = 0;
        for (int i = 0; i < 3; i++)
        {
            l = l + (s[i] - 48);
        }
        for (int i = 3; i < 6; i++)
        {
            r = r + (s[i] - 48);
        }
        if (l == r)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}