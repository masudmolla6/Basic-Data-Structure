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
    tail->next=newNode;
    tail=newNode;
}

// int max_value(Node* head){
//     while (head==NULL)
//     {
//         return INT_MIN;
//     }
    
//     int mx=INT_MIN;
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//         if(temp->val > max_value){
//             mx=temp->val;
//         }
//         temp=temp->next;
//     }
    
//     return mx;
// }

int max_value(Node* head){
    if(head==NULL)
    {
        return INT_MIN;
    }
    
    int max_value=INT_MIN;
    Node* temp=head;
    while (temp!=NULL)
    {
        if(temp->val > max_value){
            max_value=temp->val;
        }
        temp=temp->next;
    }
    
    return max_value;
}

void print_linked_list(Node* head){
    Node* temp=head;
    if(temp==NULL){
        return;
    }
    cout << temp->val << " ";
    print_linked_list(temp->next);
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    int val;

    while (cin >> val && val !=-1)
    {
        insert_at_tail(head, tail, val);
    }

    int result=max_value(head);
    cout << result << endl;
    
    return 0;
}