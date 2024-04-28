#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int arr[s.size()];
        for (int i = 0; i < s.size(); i++)
        {
            arr[i]=s[i]-48;
        }
        int a=arr[0]+arr[1]+arr[2];
    int b=arr[3]+arr[4]+arr[5];
    if (a==b)
    {
        cout<<"YES";
    }
    else cout<<"NO";

    cout<<endl;
    }
    
    
return 0;
}