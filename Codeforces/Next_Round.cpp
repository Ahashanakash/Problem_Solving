#include<bits/stdc++.h>
using namespace std;
int main(){
       int nop,kth,count=0;
       cin>>nop>>kth;
        int arr[nop];
        for (size_t i = 0; i < nop; i++)
        {
            cin>>arr[i];
        }
        for (size_t i = 0; i < nop; i++)
        {
            if (arr[i]>0)
            {
                if (arr[i]>=arr[kth-1])
            {
                count++;
            }
            }
        }
        cout<<count;
    return 0;
}