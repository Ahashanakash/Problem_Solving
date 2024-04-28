#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    if (n%2==0)
    {
        cout<<(n/2);
    }
    else
        {
           i=n/2;
           n=i-n;
           cout<<n;
        }
    return 0;
}