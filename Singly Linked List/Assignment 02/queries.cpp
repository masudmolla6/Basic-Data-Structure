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

int size_linked_list(Node* head){
    Node* temp=head;
    int count=0;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    return count;
}

void delete_at_head(Node* &head, Node* &tail){
    if(head==NULL){
        return;
    }
    Node* deletedNode=head;

    if(head==tail){
        head=NULL;
        tail=NULL;
    }
    else{
        head=head->next;
    }
    
    delete deletedNode;
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

void delete_at_tail(Node* &head, Node* &tail, int idx){
    if(head==NULL){
        return;
    }

    // cout << " Count Value =" << idx << endl;

    Node* temp=head;
    for (int i = 1; i < idx; i++)
    {
        temp=temp->next;
    }
    temp->next=tail->next;
    delete tail;
    tail=temp;
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
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin >> q;
    while(q--){
        int x, v;
        cin >> x >> v;

        if(x==0){
            insert_at_head(head, tail, v);
        }
        else if(x==1){
            insert_at_tail(head, tail, v);
        }

        
        int size=size_linked_list(head);
        // cout << "Couter Value age = " << size << endl;


        if(x==2){
            if(v==0){
                delete_at_head(head, tail);
            }
            else if(v==size-1){
                delete_at_tail(head, tail, size-1);
            }
            else
            {
                delete_at_any_position(head, tail, v);
            }
        }

        
        print_linked_list(head);
        cout << endl;
        // int size1=size_linked_list(head);
        // cout << "Couter Value pore = " << size1 << endl;
    }
    return 0;
}