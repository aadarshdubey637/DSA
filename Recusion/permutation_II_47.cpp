#include <iostream>
#include<vector>
using namespace std;
void permut(vector<int> &arr,vector<vector<int>> &ans,int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return ;
    }
    vector<bool>use(21,0);

    for(int i=index;i<arr.size();i++){
        if(use[arr[i]+10]==0){
            swap(arr[i],arr[index]);
            permut(arr,ans,index+1);
            swap(arr[i],arr[index]);
            use[arr[i]+10]=1;
        }
    }
}
vector<vector<int>> permutUnique(vector<int>&nums){
    vector<vector<int>>ans;
    permut(nums,ans,0);
    return ans;
}

int main() {
    vector<int> nums={1,1,2};
    vector<vector<int>> result=permutUnique(nums);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
             cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}