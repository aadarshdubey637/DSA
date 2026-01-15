#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
}; 
int main() {
    Node *head,*tail;
    head=tail=NULL;  
    int n;
    cout<<"Enter nodes";
    cin>>n;

    for(int i=0;i<n;i++){
        int val;
        cout<<"enter value";
        cin>>val;

        if(head==NULL){
            head=new Node(val);
            tail=head;
        }else{
            tail->next=new Node(val);
            tail=tail->next;
        }
    }
    int count=0;
    Node* t=head;
    while(t!=NULL){
        count++;
        t=t->next;
    }
    int x=count/2;
    // int x=3;
    int value;
    cout<<"Enter value insert in middle :";
    cin>>value;

    Node *temp=head;
    x--;
    while(x--){
        temp=temp->next;
    }
    

    Node *temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;


    tail=head;
    while(tail!=NULL){
        cout<<tail->data<<"->";
        tail=tail->next;
    }
    cout<<"NULL";
    
    return 0;

}