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
        int my1 = 1;
        for (int i = 1; i <= n; i++)
        {
            if (my1 % 2 != 0)
            {
                int my2 = 1;
                for (int j = 1; j <= n; j++)
                {
                    if (my2 % 2 != 0)
                    {
                        cout << "##";
                    }
                    else
                    {
                        cout << "..";
                    }
                    my2++;
                }
                cout << endl;
                my2 = 1;
                for (int j = 1; j <= n; j++)
                {
                    if (my2 % 2 != 0)
                    {
                        cout << "##";
                        my2++;
                    }
                    else
                    {
                        cout << "..";
                        my2++;
                    }
                }
                cout << endl;
            }
            else
            {
                int my2 = 1;
                for (int j = 1; j <= n; j++)
                {
                    if (my2 % 2 != 0)
                    {
                        cout << "..";
                        my2++;
                    }
                    else
                    {
                        cout << "##";
                        my2++;
                    }
                }
                cout << endl;
                my2 = 1;
                for (int j = 1; j <= n; j++)
                {
                    if (my2 % 2 != 0)
                    {
                        cout << "..";
                        my2++;
                    }
                    else
                    {
                        cout << "##";
                        my2++;
                    }
                }
                cout << endl;
            }
            my1++;
        }
    }
    return 0;
}