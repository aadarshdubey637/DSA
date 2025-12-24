// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the size of array:";
// cin>>n;
// int arr[n];
// cout<<"Enter the"<<n<<"element of array:";
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int low=0,high=n-1,item,f=0,mid; 
// cout<<"Enter Serching item:";
// cin>>item;
// while(low<=high){
//     mid=(low+high)/2;
//     if(arr[mid]==item){
//         f=1;break;
//     }
//     if(arr[mid]<item){
//         low=mid+1;
//     }
//     else{
//         high=mid-1;
//     }
// }
// if(f==1){
//     cout<<"Item found at:"<<mid;
// }
// else{
//     cout<<"Item not found:";
// }
// }
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &arr,int target){
    int st=0,end=arr.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(target>arr[mid]){
            st=mid+1;
        }else if(target<arr[mid]){
            st=mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main (){
    vector<int> arr={-1,0,3,4,5,9,12};
    int tar=12;
    int result=binarySearch(arr,tar);
    if(result !=-1){
        cout<<"Search found at index:"<<result<<endl;
    }else{
        cout<<"Search not found:"<<result<<endl;
    }
    return 0;
}