#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ai for(int i=0;i<n;i++)cin>>arr[i] 
#define arr vector<ll>arr(n)

int main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    cout<<(n<<k)<<endl;
    cout<<n*pow(2,k);
return 0;
}