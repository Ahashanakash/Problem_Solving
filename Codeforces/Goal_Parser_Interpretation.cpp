#include<bits/stdc++.h>
using namespace std;
int main (){

 string str,str1;
 int i=0,n;
 getline(cin,str);
 n=str.size();
 while(n>i){
 if(str[i]=='G'){
    str1+='G';
 }
 else if(str[i]=='(' && str[i+1]==')'){
     
         str1+='o';
         i++;
     }
 
 else if(str[i]=='(' && str[i+1]=='a' && str[i+2]=='l' && str[i+3]==')'){
    
            str1+="al";
            i+=3;

 }
 i++;
 }
 cout<<"\""<<str1<<"\""<<endl;
    return 0;
}