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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        newNode->pre=tail;
        tail=newNode;
    }
}
int size_linked_list(Node* temp){
    int size=0;
    while (temp!=NULL)
    {
        size++;
        temp=temp->next;
    }
    return size;
}

bool same_or_not(Node* head1, Node* head2){

    int head1_size=size_linked_list(head1);
    int head2_size=size_linked_list(head2);
    if(head1_size!=head2_size){
        return false;
    }

    while (head1!=NULL && head2!=NULL)
    {
        if(head1->val!=head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}


void print_linked_list(Node* temp){

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
    while (cin>>val && val!=-1)
    {
        insert_at_tail(head1, tail1, val);
    }

    Node* head2=NULL;
    Node* tail2=NULL;
    while (cin>>val && val!=-1)
    {
        insert_at_tail(head2, tail2, val);
    }

    // print_linked_list(head1);
    // print_linked_list(head2);
    bool result=same_or_not(head1, head2);
    if(result==true){
        cout << "Same To Same" << endl;
    }else{
        cout << "Not Same" << endl;
    }
    
    return 0;
}