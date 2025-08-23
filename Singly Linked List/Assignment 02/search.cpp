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

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (cin >> val && val!=-1)
    {
        insert_at_tail(head, tail, val);
    }
    
    Node* temp=head;
    int x;
    cin >> x;
    int idx=0;
    bool flag=false;

    while (temp!=NULL)
    {
        if(temp->val==x){
            flag=true;
            break;
        }
        temp=temp->next;
        idx++;
    }

    if(flag==true){
        cout << idx << endl;
    }
    else{
        cout << -1 << endl;
    }

    }
    

    return 0;
}