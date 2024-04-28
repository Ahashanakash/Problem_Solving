#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;  
    cin>>a>>b>>c;
    cout<<min(min(a,c),((a+b)/2))<<"\n";
    return 0;
}