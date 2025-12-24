// #include <iostream>
// using namespace std;
// int fabonacci(int n){
//     if(n==0 || n==1) {
//         return n;
//     }

//     return fabonacci(n-1)+fabonacci(n-2);

// }

// int main() {
//     cout<<fabonacci(5);
    
//     return 0;
// }

// array is sorted
#include <iostream>
#include<vector>
using namespace std;
int isSorted(vector<int> arr,int n){
    if(n==0||n==1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);
}
int main(){
    vector<int> arr={1,5,3,4,5};
    cout<<isSorted(arr,arr.size())<<endl;
    return 0;
}