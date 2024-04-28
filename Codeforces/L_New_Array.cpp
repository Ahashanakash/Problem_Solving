#include<bits/stdc++.h>
using namespace std;

void vect(const vector<int>& v){
    for (int i = 1; i < v.size(); i++)
    {
        cout<<" "<<v[i];
    }
}

int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>brr[i];
    }
    
    vector<int>v(brr,brr+n);

    for(int i:arr){
        v.push_back(i);
    }
    cout<<v[0];
    vect(v);
    
return 0;
}