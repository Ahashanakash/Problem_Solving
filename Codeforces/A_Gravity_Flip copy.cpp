#include<bits/stdc++.h>
using namespace std;

int main (){
    int count;
    cin>>count;
    int arr[count];
    for (size_t i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr + count,less<int>());
    for (auto &&i : arr)
    {
        cout<<i<<" ";
    }
    
return 0;
}