#include<bits/stdc++.h>
using namespace std;

int main (){
ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for (size_t i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int mod=v[0]%v[1];
        for (int i = 2; i < n; i++)
        {
            mod=mod%v[i];
        }
        (mod>0)?cout<<"YES"<<endl : cout<<"NO"<<endl;
        
    }
    
return 0;
}