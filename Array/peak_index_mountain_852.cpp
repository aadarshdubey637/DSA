// #include<iostream>
// #include<vector>
// using namespace std;
// int peakIndexMountain(vector<int> & A){
//     int st=1,end=A.size()-2;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(A[mid-1]<A[mid] && A[mid]>A[mid+1]){
//             return mid;
//         }else if(A[mid-1]<A[mid]){
//             st=mid+1;
//         } 
//         else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> v={0,10,5,2};
//     cout<<peakIndexMountain(v);
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int peakIndexMountain(vector<int> & A){
 
//     for(int i=1;i<A.size()-1;i++){
//         if(A[i-1]<A[i] && A[i]>A[i+1]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> v={0,10,5,2};
//     cout<<peakIndexMountain(v);
//     return 0;

// }


#include<iostream>
#include<vector>
using namespace std;

int pleakIndexMountainArray(vector<int>& A){
    int st=1,end=A.size()-2;

    while(st<=end){
        int mid=st+(end-st)/2;
        if(A[mid-1]<A[mid]&& A[mid]>A[mid+1]){
            return mid;
        }else if(A[mid-1]<A[mid]){
            st=mid+1;
        }else{
            end=mid-1; 
        }
    }
    return -1;
}
 int main(){
    vector<int> v={0,10,5,2};
    cout<<pleakIndexMountainArray(v);
    return 0;
}