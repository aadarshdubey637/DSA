// #include<iostream>
// #include<vector>

// using namespace std;
// void sortColor(vector<int> & nums){
//     int n=nums.size();
//     int low=0,mid=0,high=n-1;
//     while(mid<=high){
//         if(nums[mid]==0){
//             swap(nums[low],nums[mid]);
//             mid++;low++;
//         }else if(nums[mid]==1){
//             mid++;
//         }else{
//             swap(nums[high],nums[mid]);
//             high--;
//         }
//     }
// }
// int main(){
//     vector<int> nums={2,0,2,1,1,0};
//     sortColor(nums);
//         for(int x : nums){
//         cout << x << " ";
//     }
    
//     return 0;
// }

// #include<iostream>
// #include<vector>

// using namespace std;
// void sortColor(vector<int> & nums){
//     int count0=0,count1=0,count2=0;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]==0)count0++;
//         else if(nums[i]==1)count1++;
//         else count2++;
//     }   
//     int idx=0;
//     for(int i=0;i<count0;i++){
//         nums[idx++]=0;
//     }
//      for(int i=0;i<count1;i++){
//         nums[idx++]=1;
//     }
//      for(int i=0;i<count2;i++){
//         nums[idx++]=2;
//     }

// }
// int main(){
//     vector<int> nums={2,0,2,1,1,0};
//     sortColor(nums);
//         for(int x : nums){
//         cout << x << " ";
//     }
//     return 0;
// }

#include<iostream>
#include<vector>

using namespace std;
#include <iostream>
using namespace std;
void sortColor(vector<int>&A){
    int n=A.size();
    int mid=0,low=0,high=n-1;
    while(mid<=high){
        if(A[mid]==0){
            swap(A[mid],A[low]);
            low++;mid++;
        }else if(A[mid]==1){
            mid++;
        }else{
            swap(A[high],A[mid]);
            high--;
        }
    }
}

int main() {
    vector<int> v={2,0,2,1,1,0};
    sortColor(v);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}