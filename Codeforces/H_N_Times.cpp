#include<bits/stdc++.h>
using namespace std;

void func(int n, char c){
    for (int i = 1; i < n; i++){ 
        cout<<" "<<c;
    }
    }

int main ()
{
    int t;
    cin>>t;
    while (t--){
        int n;
        char c;
        cin>>n>>c;
        cout<<c;
        func(n,c);
        cout<<endl;
        }
return 0;
}