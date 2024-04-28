#include<bits/stdc++.h>
using namespace std;

int main (){
ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while (t--)
    {
        int as,bs,k;
        int frr[100005];
        cin>>as>>bs>>k;
        int arr[as];
        int brr[bs];
        for (size_t i = 0; i < as; i++)
        {
            cin>>arr[i];
            frr[arr[i]]=arr[i];
        }
        for (size_t i = 0; i < bs; i++)
        {
            cin>>brr[i];
            frr[arr[i]]=arr[i];
        }
        if (as<k/2 || bs<k/2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            int cnt=1;
        for (size_t i = 1; i < k; i++)
        {
            if (arr[i]==cnt)
            {
                cnt++;
                continue;
            }
            else {
                cout<<"NO"<<endl;
                break;
            }
        }
        cout<<"YES"<<endl;
        }
        
        
    }
    
return 0;
}