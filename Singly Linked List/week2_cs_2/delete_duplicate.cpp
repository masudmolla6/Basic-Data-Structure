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
    Node* temp=head;
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

void sort_linked_list(Node* &head){
    for (Node* i = head; i->next!=NULL; i=i->next)
    {
        for (Node* j = i->next; j!=NULL; j=j->next)
        {
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }
    
}

void delete_duplicate(Node* head){
    Node* temp=head;

    while (temp->next!=NULL)
    {
        if(temp->val==temp->next->val){
            Node* duplicate = temp->next;
            temp->next = temp->next->next;
            delete duplicate;
        }
        else{
            temp=temp->next;
        }
    }
    
}

void print_linked_list(Node* head){
    if(head==NULL){
        return;
    }
    cout << head->val << " ";
    print_linked_list(head->next);
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    int val;

    while (true)
    {
        cin >> val;
        if(val==-1){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    sort_linked_list(head);
    delete_duplicate(head);
    print_linked_list(head);
    return 0;
}