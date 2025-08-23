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

void size_linked_list(Node* head){
    Node* temp=head;
    int count=0;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    cout <<"size"<< count << endl;
}

void delete_at_tail(Node* &head, Node* &tail, int idx){
    Node* temp=head;
    for (int i = 1; i < idx; i++)
    {
        temp=temp->next;
    }
    temp->next=tail->next;
    delete tail;
    tail=temp;
}

void print_linked_list(Node* temp){
    if(temp==NULL){
        return;
    }
    cout << temp->val << endl;
    print_linked_list(temp->next);
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
    // cout << "befor Tail " << tail->val << endl;
    // delete_at_tail(head, tail, 4);
    print_linked_list(head);
    size_linked_list(head);
    // cout << "after Tail " << tail->val << endl;
    
    return 0;
}