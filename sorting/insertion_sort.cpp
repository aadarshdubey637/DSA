// #include<iostream>
// using namespace std;

// void insertionSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int curr=arr[i];
//         int prev=i-1;

//         while(prev>= 0 && arr[prev]>curr){
//             arr[prev+1]=arr[prev];
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }    
// }

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[5]={1,3,2,5,4};
//     int n=5;
//     insertionSort(arr,n);
//     printArray(arr,n);
//     return 0;

// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;

        while(prev >=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        } 
        arr[prev+1]=curr;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
