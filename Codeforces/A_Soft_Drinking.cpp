#include<bits/stdc++.h>
using namespace std;

int main (){
ios_base::sync_with_stdio(false);

    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    long long toast,lime,salt;
    toast=(k*l)/nl;
    lime=c*d;
    salt=p/np;
    long long ans=min(toast,(min(lime,salt)))/n;
    cout<<ans;
    
return 0;
}