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

// void insert_at_any_position(Node* &head, Node* &tail, int val, int idx){
//     Node* newNode=new Node(val);
//     Node* temp=head;

//     int count=0;
//     while(temp!=NULL && count < idx-1){
//         count++;
//         temp=temp->next;
//     }
    
//     cout <<  temp->val << endl;

//     if(temp==NULL){
//         return;
//     }

//     Node* nextNode=temp->next;

//     temp->next=newNode;
//     newNode->pre=temp;
//     newNode->next=nextNode;


//     if (nextNode != NULL) {
//         nextNode->pre = newNode;
//     } 
//     else {
//         tail = newNode;
//     }

// }

void insert_at_any_position(Node* &head, Node* &tail, int val, int idx){
    Node* newNode=new Node(val);
    if(idx==0){
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            newNode->next=newNode;
            head->pre=newNode;
            head=newNode;
        }
        return;
    }

    Node* temp=head;
    int count=0;

    while (temp!=NULL && count<idx-1)
    {
        count++;
        temp=temp->next;
    }

    Node* nextNode=temp->next;

    newNode->pre=temp;
    temp->next=newNode;
    newNode->next=nextNode;

    if(nextNode!=NULL){
        nextNode->pre=newNode;
    }
    else{
        tail=newNode;
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
    
    insert_at_any_position(head, tail, 100, 3);
    print_forward(head);
    
    return 0;
}