#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if ((k*2)>=n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int c=0;
        for (size_t i = 0; i < k; i++)
        {
            if (s[i]==s[(n-i-1)])
            {
                c++;
            }
            
        }
        if (c==k)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
return 0;
}