#include<bits/stdc++.h>
using namespace std;

int main (){
ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        char arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j]=='1')
                {
                    cnt++;
                    if (arr[i+1][j]=='0' && arr[i+1][j+1]=='1')
                    {
                        cout<<"TRIANGLE"<<endl;
                    
                        break;
                    }
                    else if (j>0 && arr[i+1][j-1]=='1')
                    {
                        cout<<"TRIANGLE"<<endl;
                        
                        break;
                    }
                    else 
                    {
                    cout<<"SQUARE"<<endl;
                    break;
                    }
                }
                
            }
            if(cnt>0)break;
            
        }
        
        
    }
    
return 0;
}