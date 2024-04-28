#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long add,result=0,power=1;
        for (int  i = s.size()-1; i >=0; i--)
        {
            add=s[i]-'0';
            result += add*power;
            power *=2;
        }
        cout<<result<<endl;
    }
    
    
    return 0;
}