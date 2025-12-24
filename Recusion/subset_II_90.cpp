#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getAllSubset(vector<int>& nums,int index,vector<vector<int>> &ans,vector<int>&temp){
    if(index==nums.size()){
        ans.push_back(temp);
        return ;
    }
    temp.push_back(nums[index]);
    getAllSubset(nums,index+1,ans,temp);
    temp.pop_back();

    int idx=index+1;
    while(idx<nums.size()&& nums[idx]==nums[idx-1])idx++;
    getAllSubset(nums,idx,ans,temp);

}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    vector<int> temp;
    
    getAllSubset(nums,0,ans,temp);
    return ans;
    }
int main() {
    vector<int> nums={1,2,2};
  vector<vector<int>> result = subsetsWithDup(nums);
  for(auto s: result){
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;
  }
    return 0;
}