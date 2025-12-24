// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;

//     // node(int value){
//     //     data=value;
//     //     next=NULL;
//     // }
// }; 
// int main(){
//     node* head;
//     head=new node();
//     head->data=4;
//     head->next=NULL;

//     cout<<head->data<<endl;
//     cout<<head->next<<endl;
    
//     return 0;
// }

#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    // node(int value){
    //     data=value;
    //     next=NULL;
    // }
};
int main(){
    node* head=NULL;
    node *temp;
    node*  newNode=NULL;

    int n;
    cout<<"Enter the size of linked list:";
    cin>>n;
    for(int i=0;i<n;i++){

        newNode=new node;
        cout<<"Enter "<<i+1<<": element:";
        cin>>newNode->data;
        newNode->next=NULL;

    if(head==NULL){
        head=newNode;
        temp=head;
    }
    else{
        // temp=new node(x);
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

