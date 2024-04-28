#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;

        string v1;
        string v2;

        for (size_t i = 0; i < a.size(); i++)
        {
            v1.push_back(tolower(a[i]));
        }
        for (size_t i = 0; i < b.size(); i++)
        {
            v2.push_back(tolower(b[i]));
        }

          if(v1>v2){
            cout<<"1";
          }
          else if (v1<v2)
          {
            cout<<"-1";
          }
          else if (v1==v2)
          {
            cout<<"0";
          }
          
    return 0;
}