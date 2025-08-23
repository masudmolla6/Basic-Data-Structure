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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_at_tail(head, tail, val);
    }
    
    // print_linked_list(head);
    int target_val;
    cin >> target_val;

    Node* temp=head;
    int idx=0;
    bool flag=false;

    while (temp!=NULL)
    {
        if(temp->val==target_val){
            cout << idx << endl;
            flag=true;
            break;
        }
        temp=temp->next;
        idx++;
    }

    if(flag==false){
        cout << -1 << endl;
    }
    

    return 0;
}