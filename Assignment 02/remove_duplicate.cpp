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

void print_linked_list(Node* head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    cout << temp->val << " ";
    print_linked_list(temp->next);
}

int main()
{
    vector<int> fre(1005, 0);
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (cin >> val && val!=-1)
    {
        fre[val]++;
        if(fre[val] <=1){
            insert_at_tail(head, tail, val);
        }
    }

    print_linked_list(head);
    
    return 0;
}