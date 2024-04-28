#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t,n,i;
    cin>>t;
    while (t!=0)
    {

        cin>>n;
        long long arr[n],n1=1;
        for ( i = 0; i < n; i++)
        {
            cin>>arr[i];
            n1=n1*arr[i];
        }
        long long result=n1%10;
        if (result==2 || result==3 || result==5)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;

        t--;
    }
    

    return 0;
}