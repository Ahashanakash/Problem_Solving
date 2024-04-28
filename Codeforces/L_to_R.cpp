#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int pre[n+1];
    pre[0]=0;
    for(int i=1;i<=n;i++)
    {
        int a; cin>>a;
        if(a==0) pre[i]=pre[i-1]+1;
        else pre[i]=pre[i-1];
    }
    int q; cin>>q;
    while(q--)
    {
        int l,r; cin>>l>>r;
        if(pre[r]-pre[l-1]>0) cout<<0<<'\n';
        else cout<<1<<'\n';
    }
    return 0;
}