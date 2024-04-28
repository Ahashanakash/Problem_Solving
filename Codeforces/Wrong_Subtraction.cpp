#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int n,k;
    cin>>n>>k;
    for (size_t i = 1; i<=k; i++)
    {
        if (n%10==0)
        {n/=10;}
        else n-=1;
    }
    cout<<n;
    return 0;}