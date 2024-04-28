#include<bits/stdc++.h>
using namespace std;

int main (){
    //array size
    int n;
    cin>>n;

    //array input
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    //counting array for frequency
    int freq[10]={0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    
    //printing frequency array
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<" "<<freq[i]<<endl;
    }
    
return 0;
}