#include<bits/stdc++.h>
using namespace std;

int main(){
    long double n,k,a;

    cin>>n>>k>>a;
    long double r=((n)*k)/a;
    if (abs(r-round(r))>1e-9)
    {
        cout<<"double";
    }
    else if (r>=-2147483648 && r<=2147483648)
    {
        cout<<"int";
    }
    else 
    {
        cout<<"long long";
    }
    return 0;
}