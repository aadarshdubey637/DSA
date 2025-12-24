#include <iostream>
#include<vector>
using namespace std;
void permut(int arr[],vector<vector<int>>&ans,vector<int>&temp,vector<bool>&visted){
    if(visted.size()==temp.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<visted.size();i++){
        if(visted[i]==0){
            visted[i]=1;
            temp.push_back(arr[i]);
            permut(arr,ans,temp,visted);
            visted[i]=0;
            temp.pop_back();
        }
    }
}
int main() {
    int arr[]={1,2,3};
    vector<vector<int> >ans;
    vector<int> temp;
    vector<bool> visted(3,0);
    permut(arr,ans,temp,visted);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}