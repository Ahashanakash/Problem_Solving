#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k,n,w,r=0;
    cin>>k>>n>>w;
    for (size_t i = 1; i <= w; i++)
    {r=r+(i*k);}
    r=r-n;
    if (r<1)
    {cout<<"0";}
    else cout<<r;}