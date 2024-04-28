#include<bits/stdc++.h>
using namespace std;

bool d_year(long long y1){
    unordered_set<int> us;
    while (y1!=0)
    {
        int d =y1%10;
        if (us.count(d)>0)
        {
            return false;
        }
        us.insert(d);
        y1/=10;
    }
    return true;
    }


int main(){
    long long y;
    cin>>y;
    y++;
    while (!d_year(y))
    {
        y++;
    }
    cout<<y;
    return 0;
    }