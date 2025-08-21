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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}

int max_value(Node* head){
    if(head==NULL){
        return INT_MIN;
    }

    int mx_value=INT_MIN;
    Node* temp=head;
    while (temp!=NULL)
    {
        if(temp->val > mx_value){
            mx_value=temp->val;
        }
        temp=temp->next;
    }
    
    return mx_value;
}

int min_value(Node* head){
    if(head==NULL){
        return INT_MAX;
    }

    int mn_value=INT_MAX;
    Node* temp=head;
    while (temp!=NULL)
    {
        if(temp->val < mn_value){
            mn_value=temp->val;
        }
        temp=temp->next;
    }
    
    return mn_value;
}

// void print_linked_list(Node* head){
//     if(head==NULL){
//         return;
//     }

//     Node* temp=head;
//     cout << temp->val << " ";
//     print_linked_list(temp->next);
// }

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (cin >> val && val!=-1)
    {
        insert_at_tail(head, tail, val);
    }
    
    int mx_value=max_value(head);
    int mn_value=min_value(head);
    int difference=mx_value-mn_value;
    
    cout << difference << endl;

    return 0;
}