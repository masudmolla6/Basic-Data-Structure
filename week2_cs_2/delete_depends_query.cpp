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
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

int get_linked_list_size(Node* head){
    Node* temp=head;
    int count=0;

    while (temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
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
    }
    
    delete deletedNode;
}

void delete_at_any_position(Node* &head, Node* &tail, int idx){
    if(head==NULL){
        return;
    }

    Node* temp=head;
    int count=0;

    while (temp!=NULL && count<idx-1)
    {
        temp=temp->next;
        count++;
    }
    
    if(temp==NULL || temp->next==NULL){
        return;
    }
    
    Node* deletedNode=temp->next;
    temp->next=temp->next->next;

    if(deletedNode==tail){
        tail=temp;
    }

    delete deletedNode;

}

void delete_at_tail(Node* &head, Node* &tail){
    if(head==NULL){
        return;
    }

    if(head==tail){
        delete head;
        head=NULL;
        tail=NULL;
        return;
    }

    Node* temp=head;

    while (temp->next!=tail)
    {
        temp=temp->next;
    }

    delete tail;
    tail=temp;
    tail->next=NULL;

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
    while (cin >> val && val!=-1)
    {
        insert_at_tail(head, tail, val);
    }

    int idx;
    while (cin >> idx)
    {
        int size=get_linked_list_size(head);
        if(idx==0){
            delete_at_head(head, tail);
            print_linked_list(head);
        }
        else if(idx==size-1){
            delete_at_tail(head, tail);
            print_linked_list(head);
        }
        else if(idx>=size){
            cout<<"invalid"<<endl;
        }
        else{
            delete_at_any_position(head, tail, idx);
            print_linked_list(head);
        }
    }
    
    return 0;
}