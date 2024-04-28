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
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (n == 2)
        {
            if ((s[0] == 'R' && s[1] == 'B') || (s[0] == 'B' && s[1] == 'R'))
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W' && s[i + 1] == 'B' && s[i + 2] == 'W')
            {
                cout << "NO" << endl;
                cnt++;
                break;
            }
            else if (s[i] == 'W' && s[i + 1] == 'R' && s[i + 2] == 'W')
            {
                cout << "NO" << endl;
                cnt++;
                break;
            }
            else if (s[i] == 'B' && s[i + 1] == 'B' && s[i + 2] == 'B')
            {
                cout << "NO" << endl;
                cnt++;
                break;
            }
            else if (s[i] == 'R' && s[i + 1] == 'R' && s[i + 2] == 'R')
            {
                cout << "NO" << endl;
                cnt++;
                break;
            }
            // else if (s[i] == 'R' && s[i + 1] == 'R' && s[i + 2] == 'W')
            // {
            //     cout << "NO" << endl;
            //     cnt++;
            //     break;
            // }
            // else if (s[i] == 'B' && s[i + 1] == 'B' && s[i + 2] == 'W')
            // {
            //     cout << "NO" << endl;
            //     cnt++;
            //     break;
            // }
        }
        if (cnt == 0)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}