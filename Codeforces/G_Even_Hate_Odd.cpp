#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;

    while (t--)
    {
        int n,even=0,odd=0,count=0;
        cin>>n;

        int arr[n];
        int div=n/2;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i]%2==0) even++;
            else odd++;
        }

        if (n%2!=0) cout<<"-1"<<endl;

        else {
            if (odd>even) count=odd-div;
        else count=even-div;

        cout<<count<<endl;
        }
    }
return 0;
}