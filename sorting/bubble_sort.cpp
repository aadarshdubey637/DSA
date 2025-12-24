// #include<iostream>
// using namespace std;
// void bubbleSort(int arr[],int n){
//     bool isSwap=false;

//     for(int i=0;i<n-i;i++){
//             bool isSwap=false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//             isSwap=true;
//         }
//     }
//     if(!isSwap){
//         return ;
//         }
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
//     bubbleSort(arr,n);
//     printArray(arr,n);
//     return 0;

// }


// without function
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,3,5,4,1};
//     int n=5;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,3,5,4,1};
//     int n=5;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

