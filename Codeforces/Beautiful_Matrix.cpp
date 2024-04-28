#include<bits/stdc++.h>
using namespace std;
int main(){
    int x[5][5];
    int mini_moves,a,b;
    for (size_t i = 0; i<5; i++)
    {
        for (size_t j = 0; j<5; j++)
        {
            cin>>x[i][j];
            if (x[i][j]==1)
            {
                a=i;
                b=j;
            }
        }
    }
    mini_moves= abs(a-2)+abs(b-2);
    cout<<mini_moves;
    return 0;
}