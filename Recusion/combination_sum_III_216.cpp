#include <iostream>
#include<vector>
using namespace std;
vector<vector<int>>ans;
 void solve(int start,int k, int tar,vector<int>&combi){
    if(k==0&&tar==0){
        ans.push_back(combi);
        return;
    }
    if(k==0 || tar<0){
        return;
    }
    for(int i=start;i<=9;i++){
        combi.push_back(i);
        solve(i+1,k-1,tar-i,combi);
        combi.pop_back();   
    }

}
vector<vector<int>> combinationSum3(int k, int n) {
    vector<int>combi;
    solve(1,k,n,combi);
    return ans;    
    }
int main() {
    int k=3;
    int n=7;
    vector<vector<int>> result=combinationSum3(k,n);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}