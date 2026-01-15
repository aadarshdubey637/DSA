
// #include <iostream>
// #include<vector>
//   using namespace std;
//   class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// int main(){
//   Node *head,*tail;
//   head=tail=NULL;
//   int n;
//   cout<<"Enter nodes:";
//   cin>>n;

//   for(int i=0;i<n;i++){
//     int val;
//     cout<<"Enter value:";
//     cin>>val;

//     if(head==NULL){
//       head=new Node(val);
//       tail=head;
//     }else{
//       tail->next=new Node(val);
//       tail=tail->next;
//     }
//   }

//   vector<int> ans;
//   Node *temp=head;
//   while(temp!=NULL){
//     ans.push_back(temp->data);
//     temp=temp->next;
//   }
//   int i=ans.size()-1;
//   temp=head;
//   while(temp!=NULL){
//     temp->data=ans[i];
//     i--;
//     temp=temp->next;
//   }

//   tail=head;
//   while(tail!=NULL){
//     cout<<tail->data<<"->";
//     tail=tail->next;
//   }
//   cout<<"NULL";
  
//   return 0;
// }


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
 
// insert end of node
int main(){
  Node *head,*tail;
  head=tail=NULL;
  int n;
  cout<<"Enter nodes:";
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
  Node * curr=head,*prev=NULL,*fut=NULL;
  while(curr){
    fut=curr->next;
    curr->next=prev;
    prev=curr;
    curr=fut;
  }
  head=prev;

  tail=head;
  while(tail!=NULL){
    cout<<tail->data<<"->";
    tail=tail->next;
  }
  cout<<"NULL";

  return 0;
}
