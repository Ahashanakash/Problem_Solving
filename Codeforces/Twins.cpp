#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int robbed=0,count=0;
    for (int i = 0; i < n; i++)
    {
        if(robbed<=(sum/2)){
            robbed+=arr[i];
            count++;
        }
        else break;
    }
    cout<<count<<endl;
return 0;
}