#include<bits/stdc++.h>
using namespace std;

int main(){
    string n,n1;
    cin>>n;
    n1.push_back(n[0]);
    for (size_t i = 0; i < n.size(); i++)
    {
        
        for (size_t j = 0; j < n1.size(); j++)
        {
            if (n[j+1]!=n1[i])
            {
                n1.push_back(n[j+1]);
            }
            
        }
    }
        
    return 0;
}
