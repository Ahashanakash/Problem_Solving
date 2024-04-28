#include<bits/stdc++.h>
using namespace std;

int main (){
ios_base::sync_with_stdio(false);
    int arr[3];
        cin>>arr[0];
        cin>>arr[1];
        cin>>arr[2];
        sort(arr,arr+3);
        int ans=(arr[1]-arr[0])+(arr[2]-arr[1]);
        cout<<ans;

return 0;
}