#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;


};

int main() {
    node* head=NULL;
    node* temp=NULL;
    node* newNode=NULL;
    int n;
    cout<<"Enter the size of linked list:";
    cin>>n;
    
    for(int i=0;i<n;i++){
        newNode=new node;
        cout<<"Enter the "<<i+1<<" element ";
        cin>>newNode->data;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            temp=head;
        }else{
            temp->next=newNode;
            temp=newNode;
        }
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    
    return 0;
}