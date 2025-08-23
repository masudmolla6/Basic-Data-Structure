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

void insert_at_tail1(Node* &head1, Node* &tail1, int val1){
    Node* newNode=new Node(val1);

    if(head1==NULL){
        head1=newNode;
        tail1=newNode;
    }
    else{
        tail1->next=newNode;
        tail1=newNode;
    }
}

// void print_linked_list1(Node* head1){
//     Node* temp=head1;
//     if(temp==NULL){
//         return;
//     }
//     cout << temp->val << endl;
//     print_linked_list1(temp->next);
// }

void insert_at_tail2(Node* &head2, Node* &tail2,int val2){
    Node* newNode=new Node(val2);
    if(head2==NULL){
        head2=newNode;
        tail2=newNode;
    }
    else{
        tail2->next=newNode;
        tail2=newNode;
    }
}

// void print_linked_list2(Node* head){
//     Node* temp=head;
//     if(temp==NULL){
//         return;
//     }
//     cout << temp->val<< endl;
//     print_linked_list2(temp->next);
// }

int linked_list1_size(Node* head1){
    Node* temp=head1;
    int count =0;
    while (true)
    {
        if(temp==NULL){
            break;
        }
        count++;
        temp=temp->next;
    }
    return count;
    
}

int linked_list2_size(Node* head2){
    Node* temp=head2;
    int count =0;
    while (true)
    {
        if(temp==NULL){
            break;
        }
        count++;
        temp=temp->next;
    }
    return count;
    
}

int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    int val1;
    while (true)
    {
        cin >> val1 ;
        if(val1==-1){
            break;
        }
        insert_at_tail1(head1, tail1, val1);
    }

    // print_linked_list1(head1);

    Node* head2=NULL;
    Node* tail2=NULL;
    int val2;

    while (true)
    {
        cin >> val2;
        if(val2==-1){
            break;
        }
        insert_at_tail2(head2, tail2, val2);
    }

    // print_linked_list2(head2);

    int list_1_size=linked_list1_size(head1);
    int list_2_size=linked_list2_size(head2);
    if(list_1_size>list_2_size){
        cout << "list one is greater then two" << endl;
    }
    else if(list_1_size<list_2_size){
        cout << "list two is greater then one" << endl;
    }
    else{
        cout << "list one and two are same." << endl;
    }
    
    return 0;
}