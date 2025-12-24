// #include<iostream>
// using namespace std;

// void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int smallestIdx=i;
//         for( int j=i+1;j<n;j++){
//             if(arr[j]<arr[smallestIdx]){
//                 smallestIdx=j;
//             }
//         }
//         swap(arr[i],arr[smallestIdx]);
//     }
// }
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     // cout<<endl;
// }

// int main(){
//     int arr[5]={1,3,2,5,4};
//     int n=5;
//     selectionSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,3,5,1,4};
//     int n=5;
//     for(int i=0;i<n-1;i++){
//         int smallestIdx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[smallestIdx]){
//                 smallestIdx=j;
//             }
//         }
//         swap(arr[i],arr[smallestIdx]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;

// }


#include<iostream>
using namespace std;
int main (){
    int arr[5]={4,1,5,2,3};
    int n=5;
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}