#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;
bool ispalind(string s){
    string s2=s;
    reverse(s2.begin(),s2.end());
    return s==s2;
}
void getAllparts(string s,vector<vector<string>> &ans,vector<string>&partition){
    if(s.size()==0){
        ans.push_back(partition);
        return;
    }
    for(int i=0;i<s.size();i++){
        string part=s.substr(0,i+1);
        if(ispalind(part)){
            partition.push_back(part);
            getAllparts(s.substr(i+1),ans,partition);
            partition.pop_back();
        }
    }
}

vector<vector<string>> partition(string s){
    vector<vector<string>> ans;
    vector<string> partition;
    getAllparts(s,ans,partition);
    return ans;
}

int main() {
    string s1="abac";
    vector<vector<string>> result=partition(s1);
    cout<<"[";
    for(int i=0;i<result.size();i++){
        cout<<"[";
        for(int j=0;j<result[i].size();j++){
            cout<<"\""<<result[i][j]<<"\"";
            if(j!=result[i].size()-1)
            cout<<",";
        }
        cout<<"]";
        if(i!=result.size()-1)
        cout<<",";
    }
    cout<<"]";
    return 0;
}