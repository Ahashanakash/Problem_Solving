#include<bits/stdc++.h>
using namespace std;

int main(){
    int M=0,N=0,requirement=0,MyArea=2,count=0,ans;
    cin>>M>>N;
    requirement=M*N;
    if (requirement>=MyArea)
    {
        ans=requirement/2;
        cout<<ans;
    }
    else 
    cout<<"0";
    
    return 0;
}