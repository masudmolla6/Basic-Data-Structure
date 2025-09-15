#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* pre;
        Node* next;
    Node(int val){
        this->val=val;
        this->pre=NULL;
        this->next=NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->next=head;
        head->pre=newNode;
        head=newNode;
    }
}
void print_forward(Node* temp){
    if(temp==NULL){
        return;
    }

    while (temp!=NULL)
    {
        cout << temp->val <<" ";
        temp=temp->next;
    }
    
}
void print_backword(Node* temp){
    if(temp==NULL){
        return;
    }
    while(temp!=NULL){
        cout << temp->val << " ";
        temp=temp->pre;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(cin>>val && val!=-1){
        insert_at_head(head, tail, val);
    }
    print_forward(head);
    cout << endl;
    print_backword(tail);
    return 0;
}