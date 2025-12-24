#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"Enter the element of array "<<i+1<<" :";
        cin>>arr[i];
    }
    int pos;
    cout<<"Enter position you want to a        dd:";
    cin>>pos;

    int val;
    cout<<"Enter value you want to insert:";
    cin>>val;

    int index=pos-1;

    for(int i=n;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=val;
    n++;

    cout<<"The value is:"<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}