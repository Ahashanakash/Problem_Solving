#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int roll;
    int number;
};

//bool cmp will swap two classses automatically if the condition is false
bool cmp(student a, student b){
    if(a.number<b.number) return true;
    else if (a.number==b.number)
    {
        if (a.roll<b.roll) return true;
        else return false;
    }
    else return false;
}

int main (){
    student st[5];

    //input
    for (int i = 0; i < 5; i++)
    {
        getline(cin,st[i].name);
        cin>>st[i].roll>>st[i].number;
        cin.ignore();
    }

    //sorting in ascending order
    sort(st,st+5,cmp);

    //printing
    for (int i = 0; i < 5; i++)
    {
        cout<<st[i].name<<" "<<st[i].roll<<" "<<st[i].number<<endl;
    }
    

return 0;
}