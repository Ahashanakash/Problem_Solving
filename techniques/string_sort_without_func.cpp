#include<bits/stdc++.h>
using namespace std;

int main (){
    //array size
    // int n;
    // cin>>n;
    // getchar();

    //character array input
    char ch[1000000];
    int count=0;
    for (int i = 0; i < 1000000; i++)
    {
        cin>>ch[i];
    }
    
    //counting array
    int freq[26]={0};
    for (int i = 0; i < strlen(ch); i++)
    {
        freq[ch[i]-'a']++;
    }
    
    //printing
    for (int i = 0; i < 26; i++)
    {
        //printing character
        char c='a'+i; 
        for (int j = 1; j <=freq[i] ; j++)
        {
            cout<<c;
        }
    }
return 0;
}