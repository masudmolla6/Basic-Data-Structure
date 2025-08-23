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

void insert_at_any_position(Node* &head, int idx, int val){
    Node* newNode=new Node(val);
    Node* temp=head;
    for (int i = 0; i < idx-1; i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

int size_linked_list(Node* head){
    Node* temp=head;
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }

    return count;
    
}

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

    int idx;
    while (cin >> idx >> val)
    {
        int size=size_linked_list(head);
        if(idx==0){
            insert_at_head(head,tail, val);
            print_linked_list(head);
            cout << endl;
        }
        else if(idx==size){
            insert_at_tail(head, tail, val);
            print_linked_list(head);
            cout << endl;
        }
        else if(size < idx){
            cout << "Invalid" << endl;        }
        else{
            insert_at_any_position(head, idx, val);
            print_linked_list(head);
            cout << endl;
        }
    }
    
    
    return 0;
}