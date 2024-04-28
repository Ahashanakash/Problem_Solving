#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,x,y,z;

    unordered_set<int> s;

    cin>>n;cin>>p;

    while(p--)
    {
        cin>>x;s.insert(x);
    }

    cin>>q;
    
    while (q--)
    {
        cin>>y;s.insert(y);
    }

    cout<<((s.size()==n) ?"I become the guy.":"Oh, my keyboard!")<<endl;

    return 0;
}