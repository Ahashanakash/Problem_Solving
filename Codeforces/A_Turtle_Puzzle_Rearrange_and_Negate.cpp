#include<bits/stdc++.h>
using namespace std;

int main (){
ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        long long sum=0;
        for (size_t i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                arr[i]*=-1;
            }
            sum+=arr[i];
        }
        cout<<sum<<endl;
        
    }

return 0;
}