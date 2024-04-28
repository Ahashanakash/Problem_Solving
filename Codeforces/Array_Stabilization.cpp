#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    
    cout<<min((v[n-1]-v[1]),(v[n-2]-v[0]));
    
return 0;
}