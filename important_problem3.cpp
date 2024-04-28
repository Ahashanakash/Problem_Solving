#include<bits/stdc++.h>
using namespace std;

vector<int>v;

class bNode{
    public:
    int value;
    bNode*left;
    bNode*right;

    bNode(int value){
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }
};

bNode* input (){
    int r;
    cin>>r;
    if(r==-1)return NULL;
    bNode *root = new bNode(r);
    queue<bNode*>q;
    q.push(root);
    while (!q.empty())
    {
        bNode* temp=q.front();
        q.pop();

        int l,r;
        bNode *left;
        bNode*right;
        cin>>l>>r;
        if(l==-1) left=NULL;
        else left= new bNode(l);
        if(r==-1) right=NULL;
        else right=new bNode(r);
        
        temp->left=left;
        temp->right=right;
        
        if(temp->left!=NULL)q.push(left);
        if(temp->right!=NULL)q.push(right);

    }
    return root;
}

void leaf_node(bNode*root){
    if(root==NULL)return;
    queue<bNode*>q;
    q.push(root);
    while (!q.empty())
    {
        bNode*temp=q.front();
        q.pop();

        if(temp->left==NULL && temp->right==NULL)v.push_back(temp->value);

        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }
    return;
}

int main (){

    bNode* root = input();
    leaf_node(root);
    sort(v.rbegin(),v.rend());
    for (int i = 0; i <v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }

return 0;
}