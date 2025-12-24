// Reverse an array in place (without using extra array).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"st element of array:";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0; 

}