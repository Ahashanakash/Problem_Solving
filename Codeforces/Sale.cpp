#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,sum=0;cin>>n>>m;
    int a[n];

    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n,less<int>());

    for (size_t i = 0; i < m; i++) 
    {
        if (a[i]<0) 
        {
            sum=sum+a[i];
        }
    }
    cout<<abs(sum);
    return 0;
    }