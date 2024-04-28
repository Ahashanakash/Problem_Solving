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
        int h;
        char c;
        string m;
        cin >> h >> c >> m;
        if (h == 12)
        {
            cout << h << ":" << m << " "
                 << "PM" << endl;
        }

        else if (h == 0)
        {
            cout << 12 << c << m << " "
                 << "AM" << endl;
        }
        else if (h > 12)
        {
            if (h - 12 < 10)
            {
                cout << "0" << h - 12 << c << m << " "
                     << "PM" << endl;
            }
            else
                cout << h - 12 << c << m << " "
                     << "PM" << endl;
        }
        else
        {
            if (h < 10)
            {
                cout << "0" << h << c << m << " "
                     << "AM" << endl;
            }
            else
                cout << h << c << m << " "
                     << "AM" << endl;
        }
    }
    return 0;
}