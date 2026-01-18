
//   #include <iostream>
//   #include<vector>
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
 
// // insert end of node
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
//   while(temp){
//     ans.push_back(temp->data);
//     temp=temp->next;
//   }
//   int start=0;
//   int end=ans.size()-1;
//   bool isPalindrome=false;
//   while(start<end){
//   if(ans[start]!=ans[end]){
//     isPalindrome=false;
//     break;
//   }
//   start++;
//   end--;
// }
// if(isPalindrome){
//     cout<<"lineked list is palindrome";
// }else{
//     cout<<"linked list not palindrome ";
// }
//   tail=head;
//   while(tail!=NULL){
//     cout<<tail->data<<"->";
//     tail=tail->next;
//   }
//   cout<<"NULL";

//   return 0;
// }


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
  Node* temp=head;
  int count=0;
  while(temp){
    count++;
    temp=temp->next;
  }
  count/=2;
  Node *curr=head,*prev=NULL;
  while(count--){
    prev=curr;
    curr=curr->next;
  }
  prev->next=NULL;
  Node*front=NULL;
  while(curr){
    front=curr->next;
    curr->next=prev;
    prev=curr;
    curr=front;
  }
  Node *head1=head; 
  Node *head2=prev;
  bool Palindrome=true;
  while(head2){
    if(head1->data!=head2->data){
        Palindrome=false;
        break;

    }
    head1=head1->next;
    head2=head2->next;    
  }

 if(Palindrome)
    cout << "Palindrome\n";
else
    cout << "Not Palindrome\n";


  return 0;
}
