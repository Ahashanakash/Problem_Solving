#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+1==arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<count;
    
return 0;
}