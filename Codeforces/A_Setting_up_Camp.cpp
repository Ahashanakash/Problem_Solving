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
        long long a, b, c;
        cin >> a >> b >> c;
        long long cnt = 0;

        if (b % 3 == 1 && c < 2)
        {
            cout << "-1" << endl;
            continue;
        }
        else if (b % 3 == 2 && c < 1)
        {
            cout << "-1" << endl;
            continue;
        }
        if ((b + c) % 3 == 0)
        {
            cnt = (b + c) / 3;

            cnt = cnt + a;
            cout << cnt << endl;
        }

        else
        {
            cnt = (b + c) / 3;

            cnt = cnt + 1 + a;
            cout << cnt << endl;
        }
    }
    return 0;
}