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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }else{
        tail->next=newNode;
        newNode->pre=tail;
        tail=newNode;
    }
}

void insert_at_any_position(Node* &head, Node* &tail, int idx, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    Node* temp=head;
    int count=0;
    while (temp!=NULL && count < idx-1)
    {
        count++;
        temp=temp->next;
    }
    Node* nextNode=temp->next;
    // cout << nextNode->val<< endl;
    temp->next=newNode;
    newNode->pre=temp;
    newNode->next=nextNode;
    nextNode->pre=newNode;
}

void print_linked_list(Node* head){
    Node* temp=head;
    while(temp!=NULL){
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

    insert_at_any_position(head, tail,2, 100);
    insert_at_any_position(head, tail,4, 500);

    print_linked_list(head);
    
    return 0;
}