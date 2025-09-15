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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        newNode->pre=tail;
        tail=newNode;
    }
}

int list_size(Node* temp){
    if(temp==NULL){
        return 0;
    }
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void insert_at_any_position(Node* head, Node* tail, int idx, int val){
    int size=list_size(head);
    if(idx<0 || idx>size){
        cout << "Invalid Index" << endl;
        return;
    }
    
    if(idx==0){
        insert_at_head(head, tail, val);
        return;
    }
    else if(size==idx){
        insert_at_tail(head, tail, val);
        return;
    }

    Node* newNode=new Node(val);
    Node* temp=head;
    int count=0;
    while(temp!=NULL && count<idx-1){
        count++;
        temp=temp->next;
    }
    // cout << temp->val << endl;
    Node* nextNode=temp->next;
    temp->next=newNode;
    newNode->pre=temp;
    newNode->next=nextNode;
    nextNode->pre=newNode;
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
        insert_at_tail(head, tail, val);
    }
    int idx;
    cin >> idx >> val;
    insert_at_any_position(head,tail, idx, val);
    print_forward(head);
    return 0;
}