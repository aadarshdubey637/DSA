#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;
    }
};
int main() {
    Node* head=NULL,*tail=NULL;
    int n;
    cout<<"Enter the nodes";
    cin>>n;

    for(int i=0;i<n;i++){
        int val;
        cout<<"Enter nodes value";
        cin>>val;

        if(head==NULL){
            head=new Node(val);
            tail=head;
        }else{
            tail->next=new Node(val);
            tail=tail->next;
        }
    }
    int p;
    cout<<"Enter position what you deleted:";
    cin>>p;
    Node *temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    count-=p;
    if(count==0){
        temp=head;
        head=head->next;
        delete temp;
        return 0;
    }

    Node*curr=head,*prev=NULL;
    while(count--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;

    tail=head;
    while(tail){
        cout<<tail->data<<"->";
        tail=tail->next;
    }
    cout<<"NULL";
    
    return 0;
}