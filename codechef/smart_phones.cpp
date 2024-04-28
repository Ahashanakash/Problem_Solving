#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long b[n];
  long long mr=0;
  for (size_t i = 0; i < n; i++)
  {
    cin>>b[i];
  }
  sort(b,b+n,greater<long long>());
  for (size_t i = 0; i < n; i++)
  {
    long long r=b[i]*(i+1);
    if (r>=mr)
    {
      mr=r;
    }
  }
  cout<<mr;
  return 0;
}