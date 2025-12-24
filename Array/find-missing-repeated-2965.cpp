#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> findMissingReapeted(vector<vector<int>> & grid){
    vector<int> ans;
    unordered_set<int> s;
    int n=grid.size();
    int a,b;
    int expSum=0,actualSum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actualSum+=grid[i][j];

            if(s.find(grid[i][j])!=s.end()){
                a=grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expSum=(n*n) *(n*n+1)/2;

    b=expSum+a-actualSum;
    ans.push_back(b);

    return ans;
}
int main(){
    vector<vector<int>> v={{1,3},{2,2}};  
    vector<int> result=findMissingReapeted(v);
    for(auto p:result){
        cout<<p<<" ";
    }
    return 0;
}