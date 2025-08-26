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

void reverse_linked_list(Node* &head, Node* &tail, Node* temp){
    if(temp->next==NULL){
        head=temp;
        return;
    }

    reverse_linked_list(head, tail, temp->next);
    temp->next->next=temp;
    temp->next=NULL;
    tail=temp;
}

// void print_linked_list(Node* head){
//     Node* temp=head;

//     if(temp==NULL){
//         return;
//     }
//     print_linked_list(temp->next);
//     cout << temp->val << " ";
// }

int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    int val;

    while(cin >> val && val!=-1){
        insert_at_tail(head, tail, val);
    }

    reverse_linked_list(head, tail, head);

    cout << head->val << endl;
    cout << tail->val << endl;

    return 0;
}