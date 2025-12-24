#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array:";
cin>>n;
int arr[n];
cout<<"Enter the"<<n<<"element of array:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int low=0,high=n-1,item,f=0,mid; 
cout<<"Enter Serching item:";
cin>>item;
while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==item){
        f=1;break;
    }
    if(arr[mid]<item){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
if(f==1){
    cout<<"Item found at:"<<mid;
}
else{
    cout<<"Item not found:";
}

}