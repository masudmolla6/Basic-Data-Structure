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

void delete_at_head(Node* &head, Node* &tail){
    if(head==NULL){
        return;
    }

    Node* deletedNode=head;

    if(head==tail){
        head=NULL;
        tail=NULL;
    }
    else{
        head=head->next;
        head->pre=NULL;
    }

    delete deletedNode;
}

void delete_at_tail(Node* &head, Node* &tail){
    if(head==NULL){
        return;
    }

    Node* deletedNode=tail;

    if(head==tail){
        head=NULL;
        tail=NULL;
    }
    else{
        tail=tail->pre;
        tail->next=NULL;
    }

    delete deletedNode;
}


void delete_at_any_position     (Node* &head, Node* &tail, int idx){
    if(head==NULL){
        return;
    }

    if(idx==0){
        delete_at_head(head, tail);
        return;
    }

    Node* temp=head;

    int count=0;
    while (temp!=NULL && count < idx)
    {
        count++;
        temp=temp->next;
    }

    if(temp==NULL){
        return;
    }

    if(temp==tail){
        delete_at_tail(head, tail);
        return;
    }

    Node* deletedNode=temp;

    Node* preNode=temp->pre;
    Node* nextNode=temp->next;
    
    preNode->next=nextNode;
    nextNode->pre=preNode;

    delete deletedNode;
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
    


    delete_at_any_position(head, tail, 3);
    print_forward(head);
    return 0;
}