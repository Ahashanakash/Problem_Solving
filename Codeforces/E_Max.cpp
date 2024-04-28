#include<bits/stdc++.h>
using namespace std;
int main (){
    int count;
    cin>>count;
    int arr[count];
    for (int i = 0; i < count; i++) cin>>arr[i];
    for (int i = 0; i < count-1; i++)
    {
        for (int j = i+1; j < count; j++) if (arr[i]<arr[j]) swap(arr[i],arr[j]);
    }
    cout<<arr[0];
return 0;
}