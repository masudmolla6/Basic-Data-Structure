#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=head;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void printing_linked_list(Node* &head){
    Node* temp=head;

    while (temp!=NULL)
    {
        cout << temp->val << endl;
        temp=temp->next;
    }
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    // Node* a=new Node(20);
    // Node* tail=new Node(30);

    // head->next=a;
    // a->next=tail;

    insert_at_tail(head,tail, 100);
    insert_at_tail(head,tail, 200);
    insert_at_tail(head,tail, 300);
    printing_linked_list(head);

    return 0;
}