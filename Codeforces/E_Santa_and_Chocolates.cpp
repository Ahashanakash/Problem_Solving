#include<bits/stdc++.h>
using namespace std;

int main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int c,k;cin>>c>>k;
        int arr[c];
        long long sum=0;
        for (int i = 0; i < c; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if (sum <c)
        {
            cout<<"NO"<<endl;
        }
        else if (sum%c!=0 && k==0)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
return 0;
}