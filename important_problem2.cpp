//browser history

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    string st;
    node* next;
    node* previous;
    node(string st)
    {
        this->st=st;
        this->next=NULL;
        this->previous=NULL;
    }
};

void insert_tail(node*&head,node*&tail,string s){
    node* newnode = new node(s);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    node*temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    tail=newnode;
    temp->next=tail;
    tail->previous=temp;
}

void visit(node*head,string ss,node*&point){
    node*temp=head;
    while (temp!=NULL)
    {
        if (temp->st==ss)
        {
            cout<<temp->st<<endl;
            point=temp;
            return;
        }
        temp=temp->next;
    }
    cout<<"Not Available"<<endl;
}

void prev(node*&point){
    node*temp=point;
    if (temp->previous!=NULL)
    {
        point=point->previous;
        cout<<point->st<<endl;
    }
    else cout<<"Not Available"<<endl;
    
}

void next(node*&point){
    node*temp=point;
    if (temp->next!=NULL)
    {
        point=point->next;
        cout<<point->st<<endl;
    }
    else cout<<"Not Available"<<endl;
    
}

int main (){
    node*head=NULL;
    node*tail=NULL;
    node*point=head;
    while (true)
    {
        string s5;
        cin>>s5;
        if(s5=="end")break;
        insert_tail(head,tail,s5);
    }
    int q;
    cin>>q;
    while (q--)
    {
        string s,ss;
        cin>>s;
        if(s=="visit")
        {
            cin>>ss;
            visit(head,ss,point);
        }
        else if (s=="prev")prev(point);
        else if (s=="next")next(point);
        
    }
return 0;
}