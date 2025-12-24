#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element of array "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"Array's element is :"<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}