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

void insert_at_tail(Node* &head,Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->pre=tail;
        tail->next=newNode;
        tail=newNode;
    }
}

void insert_at_head(Node* &head,Node* &tail, int val){
    Node* newNode=new Node(val);

    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else{
        head->pre=newNode;
        newNode->next=head;
        head=newNode;
    }
}

void print_forward(Node* head){
    Node* temp=head;

    while (temp!=NULL)
    {
        cout << temp->val << " ";
        temp=temp->next;
    }
    
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    int val;

    while (cin >> val && val!=-1)
    {
        insert_at_tail(head, tail, val);
    }
    
    
    // insert_at_head(head, tail, 50);
    print_forward(head);
    
    
    return 0;
}