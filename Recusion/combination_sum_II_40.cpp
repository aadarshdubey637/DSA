#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getAllCombination(vector<int>&arr,int idx,int tar,vector<vector<int>>&ans,vector<int>&combi){

   if(tar == 0){
        ans.push_back(combi);
        return;
    }

    if(idx == arr.size() || tar < 0){
        return;
    }


    for(int i=idx;i<arr.size();i++){
        if(i>idx && arr[i]==arr[i-1]) continue;
        if(arr[i]>tar)break;

    combi.push_back(arr[i]);
    getAllCombination(arr,i+1,tar-arr[i],ans,combi);
    combi.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>&arr,int tar){
    sort(arr.begin(), arr.end());   //  VERY IMPORTANT
    vector<vector<int>> ans;
    vector<int> combi;
    getAllCombination(arr,0,tar,ans,combi);
    return ans;

}
int main() {
      vector<int> cand={10,1,2,7,6,1,5};
    int tar=8;
    vector<vector<int>> result=combinationSum(cand,tar);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}