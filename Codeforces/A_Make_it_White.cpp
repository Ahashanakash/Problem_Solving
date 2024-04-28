#include<bits/stdc++.h>
using namespace std;

int main (){
ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cin.ignore();
        int B=0,W=0;
        if(arr[0]=='B' && n==1) B++;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if(arr[i]=='B')
                {
                    W=i;
                    break;
                }
            }
            for (int i = n-1; i >=0; i--)
            {
                if(arr[i]=='B')
                {
                    B=i+1;
                    break;
                }
            }

        }
           cout<<B-W<<endl;     
        
    }
    
return 0;
}