#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int value;
    node* next;
    node* previous;
    node(int value)
    {
        this->value=value;
        this->next=NULL;
        this->previous=NULL;
    }
};

bool insert_at_index(node*&head,node*&tail,int index,int n){
    node*newnode = new node(n);
    node*temp=head;
    if (head==NULL){
        head=newnode;
        tail=newnode;
        return true;
    }
    
    if (index==0)
    {
        newnode->next=temp;
        temp->previous=newnode;
        head=newnode;
        return true;
    }
    for (int i = 1; i < index; i++)
    {
        temp=temp->next;
        if (temp==NULL) return false;
        
    }
    if (temp->next==NULL)
    {
    tail=newnode;
    temp->next=tail;
    tail->previous=temp;
    }
    else{
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->previous=newnode;
    newnode->previous=temp;
    }
}

void print(node* head1){
    node* temp=head1;
    
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void print_reverse(node* tail){
    node* temp=tail;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->previous;
    }
    cout<<endl;
}

int main (){
    int t;
    cin>>t;
    node*head1=NULL;
    node*tail1=NULL;
    while (t--)
    {
        int n,index;
        cin>>index>>n;
        if (n==-1)
        {
            break;
        }
        if(insert_at_index(head1,tail1,index,n))
        {
            print(head1);
            print_reverse(tail1);
        }
        else cout<<"Invalid"<<endl;
    }
    
return 0;
}