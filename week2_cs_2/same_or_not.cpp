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

int size_linked_list(Node* head){
    Node* temp=head;
    int count=0;
    while (temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

bool same_or_not_linked_list(Node* head1, Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    int size_1_list=size_linked_list(head1);
    int size_2_list=size_linked_list(head2);
    if(size_1_list!=size_2_list){
        return false;
    }
    
    while (temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val!=temp2->val){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    return true;
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
    Node* head1=NULL;
    Node* tail1=NULL;

    int val;

    while (cin >> val && val !=-1)
    {
        insert_at_tail(head1, tail1, val);
    }

    Node* head2=NULL;
    Node* tail2=NULL;

    while (cin >> val && val !=-1)
    {
        insert_at_tail(head2, tail2, val);
    }

    int list_1_size=size_linked_list(head1);
    int list_2_size=size_linked_list(head2);

    bool result=same_or_not_linked_list(head1, head2);

    if(result==true){
        cout << "Same Liked List" << endl;
    }
    else{
        cout << "Not Same Linked List" << endl;
    }


    
    return 0;
}