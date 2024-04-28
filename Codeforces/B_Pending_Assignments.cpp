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
        ll assign, time, day, a1, a2;
        cin >> assign >> time >> day;
        a1 = assign * time;
        a2 = day * 24 * 60;
        if (a1 > a2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}