#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> v;
        for (size_t i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            sum += x;
        }
        sort(v.begin(), v.end());
        int cnt = 0;
        for (size_t i = 0; i < n; i++)
        {
            if (sum % 3 == 0)
            {
                cout << cnt << endl;
                break;
            }
            else if ((sum + 1) % 3 == 0)
            {
                cnt++;
                cout << cnt << endl;
                break;
            }
            else
            {
                sum -= v[0];
                v.erase(v.begin());
                if (v.size() != 0)
                {
                    if (sum % 3 == 0)
                    {
                        cout << (++cnt) << endl;
                        break;
                    }
                    else if ((sum + 1) % 3 == 0)
                    {
                        cnt++;
                        cout << cnt+1 << endl;
                        break;
                    }
                    else
                        cout << (++cnt) << endl;
                    break;
                }
            }
        }
    }

    return 0;
}