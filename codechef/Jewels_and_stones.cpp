#include <bits/stdc++.h>
using namespace std;

int main() {
	string j,s;
	int n;
    cin>>n;
    while (n!=0)
    {
        cin>>j>>s;
        int count=0;
        for (char c : s)
        {
            if (j.find(c)!=string::npos)
            {
                count++;
            }
        }
        cout<<count<<endl;
        n--;
    }
	return 0;
}