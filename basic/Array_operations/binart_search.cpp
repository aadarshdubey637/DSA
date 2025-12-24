#include<iostream>
using namespace std;
int linearSearch(int arr[],int tar,int size){
    int st=0,end=size-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }else if (tar<arr[mid]){
            end=mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
     int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element of array "<<i+1<<" :";
        cin>>arr[i];
    }
     int tar;
    cout<<"Enter search you want to search:";
    cin>>tar; 
    int result=linearSearch(arr,tar,n);
    if(result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}