// #include<iostream>
// #include <string>
// using namespace std;
// int main(){
//     int arr[3]={1,2,3};
//     int n=3;
//     int st=0,end=n-1;
//     while(st<end){
//         swap(arr[st++],arr[end--]);
//     }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//     return 0;
// }

#include<iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    string str="apna college";
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}