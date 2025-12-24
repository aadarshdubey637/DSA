// brute force approach for finding majority  element of given array and the freq is n/2 
// #include<iostream>
// #include<vector>
// using namespace std;
// int majorityElement(vector<int> &nums){
//     int n=nums.size();
//     for(int i :nums){
//         int freq=0;
//         for(int j:nums){
//             if(i==j){
//                 freq++;
//             }
//         }
//         if(freq>n/2){
//             return i;
//         }
//     }  
//     // return -1;
// }
// int main(){
//     vector<int> nums={3,2,3};
//     cout<<majorityElement(nums);
//     return 0;
// }



// this is the second apporoch  first we short the array then finding the majority element
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int majorityElement(vector<int> &nums){
//     int n=nums.size();
//     sort(nums.begin(),nums.begin());
//     int freq=1,ans=nums[0];
//     for(int i=1;i<n;i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//         }else{
//             freq=1;
//             ans=nums[i];
//         }
//         if(freq>n/2){
//             return ans;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums={3,2,3};
//     cout<<majorityElement(nums);
//     return 0;
// }


// moore's voting algorithm
#include<iostream>
#include<vector>

using namespace std;
int majorityElement(vector<int> &nums){
    int freq=0,ans=0;
    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];
            freq=1;
        }
        if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
    
int main(){

    vector<int> nums={3,3,4};
    cout<<majorityElement(nums);
    return 0;
}