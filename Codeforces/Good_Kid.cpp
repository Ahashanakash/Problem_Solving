#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    while (n--)
    {
        int m=0,sum=1;
        cin>>m;
        int arr[m];
        for (size_t i = 0; i < m; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+m,less<int>());
        arr[0]+=1;
        for (size_t i = 0; i < m; i++)
        {
            sum=sum*arr[i];
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}