#include <iostream>
#include<vector>
using namespace std;
void prenth(int n,int left,int right,vector<string> &ans,string&temp){
    if(left+right==2*n){
        ans.push_back(temp);
        return ;
    }
    if(left<n){
        temp.push_back('(');
        prenth(n,left+1,right,ans,temp);
        temp.pop_back();
    }
    if(right<left){
        temp.push_back(')');
        prenth(n,left,right+1,ans,temp);
        temp.pop_back();
    }
}
vector<string> genrateParenthics(int n){
vector<string> ans;
string temp;
prenth(n,0,0,ans,temp);
return ans;
}
int main() {
    int n=3;
    vector<string> result=genrateParenthics(n);
    for(string s:result){
        cout<<s<<endl;                

    }

    return 0;
}