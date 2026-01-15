
#include <iostream>
#include<vector>
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
  Node *head=NULL,*tail=NULL;
  int n;
  cout<<"Enter node:";
  cin>>n;

  for(int i=0;i<n;i++){
    int val;
    cout<<"Enter value:";
    cin>>val;

    if(head==NULL){
      head=new Node(val);
      tail=head;
    }else{
      tail->next=new Node(val);
      tail=tail->next;
    }
  }
  int k;
  cout<<"Enter position";
  cin>>k;
  int count=0;
  if(head==NULL ||head->next==NULL){
    return 0;
  }
  Node*temp=head;
  while(temp){
    count++;
    temp=temp->next;
  }
  k=k%count;
  if(k==0)
  return 0;
  count-=k;

  Node *curr=head,*prev=NULL;
  while(count--){
    prev=curr;
    curr=curr->next;
  }
  prev->next=NULL;
  Node *newtail=curr;
  while(tail->next!=NULL){
    tail=tail->next;
  }
  tail->next=head;
  head=curr;

    tail=head;
    while(tail){
      cout<<tail->data<<"->";
      tail=tail->next;
    }
    cout<<"NULL";
    
    return 0;
}