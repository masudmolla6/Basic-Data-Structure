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

    // Node* temp=head;
    // int idx=0;

    // while (temp->next!=NULL)
    // {
    //     if(temp->val == temp->next->val){
    //         delete_at_any_position(head, tail, idx);
    //         print_linked_list(head);
    //         cout << "Duplicate Value" << endl;
    //         return 0;
    //     }
    //     else{
    //         temp=temp->next;
    //         idx++;
    //     }
    // }
    
    print_linked_list(head);
    cout << "Not Duplicate" << endl;
    return 0;
}