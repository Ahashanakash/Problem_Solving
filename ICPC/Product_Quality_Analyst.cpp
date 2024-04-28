#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long T,count=1;
    cin>>T;
    while(count<=T){
    long long n,k,sum=0;
    cin>>n>>k;
    long long arr[n];
    long long max=0;
    for(long long i=0; i<n; i++){
    cin>>arr[i];
    sum=sum+arr[i];
    if(arr[i]>max){
    max=arr[i];
    }
    }
    k--;
    sum=sum +(max*k);
    cout<<"Case "<<count<<": "<<sum<<endl;
    count++;
    }
return 0;
}