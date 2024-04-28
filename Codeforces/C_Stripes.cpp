#include<bits/stdc++.h>
using namespace std;
#define fast cin.tie(0); cout.tie(0); cin.sync_with_stdio(0); cout.sync_with_stdio(0);
void solve(){
    char a[8][8];
    size_t c=0;
    for (size_t i = 0; i < 8; i++)
    {int x=0;
    for (size_t j = 0; j < 8; j++)
    {cin>>a[i][j];
    if(a[i][j]=='R')x++;
    }
    if(x==8)c++;
    }
    cout<<(c>0 ? "R\n":"B\n");}
int main (){
    fast;
    size_t t;cin>>t;
    while (t--) solve();
    }