#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int j=n-1,k=0;
    for (int i = 0; i < j; i++)
    {
        if (arr[i]==arr[j])
        {
            j--;
            continue;
        }
        else 
        k++;
        break; 
    }
    if (k>0)
    {
        cout<<"NO";
    }
    else cout<<"YES";
    
    
return 0;
}