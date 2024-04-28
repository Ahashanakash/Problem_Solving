#include<bits/stdc++.h>
using namespace std;

int main (){
    //array size
    int n;
    cin>>n;
    getchar();

    //character array input
    char ch[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>ch[i];
    }
    
    //frequency array
    int freq[26]={0};
    for (int i = 0; i < strlen(ch); i++)
    {
        freq[ch[i]-'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(freq[i]!=0){
        char c='a'+i; 
        cout<<c<<" - "<<freq[i]<<endl;
        }  
    }
return 0;
}