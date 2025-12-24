#include <iostream>
#include<vector>
#include<set>
using namespace std;
    set<vector<int>> s;
void getAllCombination(vector<int>&arr,int idx,int tar,vector<vector<int>>&ans,vector<int>&combi){

    if(idx==arr.size() || tar<0){
        return;
    }
    if(tar==0){
        if(s.find(combi)==s.end()){
        ans.push_back(combi);
        s.insert(combi);
        }
        return;
    }
    combi.push_back(arr[idx]);
    getAllCombination(arr,idx+1,tar-arr[idx],ans,combi);

    getAllCombination(arr,idx,tar-arr[idx],ans,combi);
    combi.pop_back();
    getAllCombination(arr,idx+1,tar,ans,combi);
}

vector<vector<int>> combinationSum(vector<int>&arr,int tar){
    vector<vector<int>> ans;
    vector<int> combi;
    getAllCombination(arr,0,tar,ans,combi);
    return ans;

}
int main() {
    vector<int> cand={2,3,6,7};
    int tar=7;
    vector<vector<int>> result=combinationSum(cand,tar);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}