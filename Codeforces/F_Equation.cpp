#include<bits/stdc++.h>
using namespace std;

long long func(int x,int n,long long s,int i){
    if (i>n) return s;
    else {
    s+=pow(x,i);
    long long s1=func(x,n,s,i+=2);
    return s1;
    }
}

int main (){
    int x,n,i=2;
    cin>>x>>n;
    long long s=0;
    long long ans=func(x,n,s,i);
    cout<<ans;
return 0;
}