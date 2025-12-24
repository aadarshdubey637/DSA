#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};


int main(){
    // start with empty node
    node *head=NULL;
    node *temp=NULL;
    node *newNode=NULL;
    cout<<"Enter five element in the linkned list:"<<endl;
    for(int i=0;i<5;i++){

    // create a new node
    newNode=new node;
    cout<<"Enter element :"<<i+1;
    cin>>newNode->data;
    newNode->next=NULL;

    if(head==NULL){
        head=newNode;
        temp=head;
    }else{
        // link new to the list 
        temp->next=newNode;
        temp=newNode;
    }
}   
    // display the linked list
    cout<<"final linked list is :";
    temp=head;

    while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;

        cout<<" ";
    }
    return 0;
}