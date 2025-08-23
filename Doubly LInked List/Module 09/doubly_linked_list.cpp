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

void print_forward(Node* head){
    Node* temp=head;

    while (temp!=NULL)
    {
        cout << temp->val << " ";
        temp=temp->next;
    }
    
}
void print_backward(Node* tail){
    Node* temp=tail;
    cout << endl;


    while (temp!=NULL)
    {
        cout << temp->val << " ";
        temp=temp->pre;
    }
    
}

int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);

    head->next=a;
    a->pre=head;
    a->next=tail;
    tail->pre=a;


    print_forward(head);
    print_backward(tail);


    return 0;
}