#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    node* head=NULL;
    node *temp;

    int n;
    cout<<"Enter the size of linked list:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter "<<i+1<<": element:";
        cin>>x;
    if(head==NULL){
        head=new node(x);
    }
    else{
        temp=new node(x);
        temp->next=head;
        head=temp;
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