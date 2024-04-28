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
        string s, ss;
        cin >> s >> ss;
        int chef = 0, chefina = 0, ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] == 'R' && ss[i] == 'S') || (s[i] == 'P' && ss[i] == 'R') || (s[i] == 'S' && ss[i] == 'P'))
                chef++;
            else if ((ss[i] == 'R' && s[i] == 'S') || (ss[i] == 'P' && s[i] == 'R') || (ss[i] == 'S' && s[i] == 'P'))
                chefina++;
        }
        while (chef <= chefina)
        {
            chef++;
            chefina--;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}