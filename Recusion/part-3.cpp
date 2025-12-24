// #include <iostream>
// using namespace std;

// int main() {
//     string name="aadarsh";
//     string reverse="";
//     for(int i=name.length()-1;i>=0;i--){
//         reverse+=name[i];
//     }
//     cout<<reverse<<endl;
//     return 0;
// }

 
// #include <iostream>
// #include<vector>
// using namespace std;
// void printSubset(vector<int> &arr,vector<int> &ans,int i){
//     if(i==arr.size()){
//         for(int val:ans){
//             cout<<val<<" ";
//         }
//         cout<<endl;
//         return ;
//     }
//     ans.push_back(arr[i]);
//     printSubset(arr,ans,i+1);

//     ans.pop_back();
//     printSubset(arr,ans,i+1);
// }
// int main(){
//     vector<int> arr={1,2,3};
//     vector<int> ans;
    
//     printSubset(arr,ans,0);
//     return 0;
// }


// this is the problem number 78 on leetcode.
// #include <iostream>
// #include<vector>
// using namespace std;
// void getAllSubset(vector<int>& nums,vector<int> & ans,int i,vector<vector<int>> &allSubset){
//     if((i==nums.size())){
//         allSubset.push_back({ans});
//         return;
//     }
//     ans.push_back(nums[i]);
//     getAllSubset(nums,ans,i+1,allSubset);

//     ans.pop_back();

//     getAllSubset(nums,ans,i+1,allSubset);
// }
// vector<vector<int>> subsets(vector<int>&nums){
//     vector<vector<int>> allSubset;
//     vector<int> ans;
        
//     getAllSubset(nums,ans,0,allSubset);

//     return allSubset;
// }

// int main() {

//      vector<int> nums = {1, 2, 3};   // 🔹 STEP 1: Input array

//     vector<vector<int>> result = subsets(nums); // 🔹 STEP 2: Call function

//     // 🔹 STEP 3: Print all subsets
//     for (auto subset : result) {
//         cout << " ";
//         for (int x : subset) cout << x << " ";
//         cout << " " << endl;
//     }
    
//     return 0;
// }


// coder Army
// #include <iostream>
// #include<vector>
// using namespace std;

// void subset(int arr[],int index,int n,vector<vector<int>>& ans,vector<int>& temp){
//     if(index==n){
//         ans.push_back(temp);
//         return;
//     }
//     subset(arr,index+1,n,ans,temp);
//     temp.push_back(arr[index]);
//     subset(arr,index+1,n,ans,temp);
//     temp.pop_back();

// }

// int main() {
//     int arr[]={1,2,3};
//     int n=3;
//     vector<vector<int>> ans;
//     vector<int> temp;
//     subset(arr,0,n,ans,temp);

//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// String subsequence
#include <iostream>
#include<vector>
using namespace std;

void subset(string s,int index,int n,vector<string>&ans,string &temp){
    if(index==n){
        ans.push_back(temp);
        return ;
    }
    subset(s,index+1,n,ans,temp);
    temp.push_back(s[index]);
    subset(s,index+1,n,ans,temp);
    temp.pop_back();

}

int main() {
    string s="abc";
    vector<string>ans;
    string temp;
    subset(s,0,s.size(),ans,temp);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}