#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;

//template <typename T>
//using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long


void solve()
{
    string s,target="codeforces";
    cin>>s;
    ll count=0;
    for (int i = 0; i < 10; i++)
    {
        if(s[i]!=target[i]){
            count+=1;
        }
    }
    cout<<count<<'\n';
}
int main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    solve();
}
return 0;
}