#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int n,cnt=2;
        cin>>n>>s;
        sort(s.begin(),s.end());
        for (int i = 0; i < n-1; i++)
        {
            if (s[i]==s[i+1])
            {
                cnt++;
            }
            else cnt+=2;
        }
        cout<<cnt<<endl;
    }
    
    
return 0;
}