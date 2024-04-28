#include<bits/stdc++.h>
using namespace std;

int main (){
    long long n,q;
    cin>>n>>q;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long pre_sum[n]={0};
    pre_sum[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        pre_sum[i]=arr[i]+pre_sum[i-1];
    }
    
    while (q--)
    {
        long long l,r;
        cin>>l>>r;
        l--;;
        r--;
        long long sum=0;
        if (l==0)
        {
            sum=pre_sum[r];
        }
        else {
        sum=pre_sum[r]-pre_sum[l-1];
        }
        cout<<sum<<endl;
    }
return 0;
}