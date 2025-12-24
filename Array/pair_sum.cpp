// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     int target=5;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 cout<<i<<","<<j<<endl;
//             }
//         }
//     }
//     return  0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// brute forch approch 
// vector<int> pairSum(vector<int> nums ,int target){
//         vector<int> ans;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]+nums[j]==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
//         return ans;
//     }
//     int main(){
//     vector<int> nums={2,7,11,15};
//     int target=14;
//     vector<int> ans=pairSum(nums,target);
//     cout<<ans[0]<<","<<ans[1];
//      return  0;
//     }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> pairSum(vector<int> nums ,int target){
        vector<int> ans;
        int n=nums.size();
        sort(nums.begin(), nums.end()); 
        int i=0,j=n-1;
        while(i<j){
        int pairSum=nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }else if(pairSum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
            }
        }
        return ans;    
    }
    int main(){
    vector<int> nums={3,2,4};
    int target=6;
    vector<int> ans=pairSum(nums,target);
    cout<<ans[0]<<","<<ans[1];
     return  0;
    }

