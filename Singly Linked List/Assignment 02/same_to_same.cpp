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

int linked_list_size(Node* head){
    Node* temp=head;
    int count=0;

    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }

    return count++;
}

bool same_or_not_linked_list(Node* head1, Node* head2){
    int first_Linked_list_size=linked_list_size(head1);
    int secound_Linked_list_size=linked_list_size(head2);

    if(first_Linked_list_size != secound_Linked_list_size){
        return false;
    }

    Node* temp1=head1;
    Node* temp2=head2;

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

int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    int val;
    
    while (cin >> val && val!=-1)
    {
        insert_at_tail(head1, tail1, val);
    }
    
    Node* head2=NULL;
    Node* tail2=NULL;
    
    while (cin >> val && val!=-1)
    {
        insert_at_tail(head2, tail2, val);
    }


    bool result=same_or_not_linked_list(head1, head2);

    if(result==true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}