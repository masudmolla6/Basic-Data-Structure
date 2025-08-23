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

void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
}

void print_linked_list(Node* &head){
    Node* temp=head;
    cout << temp->val << endl;
    print_linked_list(temp->next);
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    insert_at_head(head, tail, 10);
    insert_at_head(head, tail, 200);
    insert_at_head(head, tail, 30);
    insert_at_head(head, tail, 50);
    print_linked_list(head);
    
    return 0;
}