#include <iostream>
#include<vector>

using namespace std;
void find(int row,int n,vector<vector<string>>&ans,vector<string>&Board,vector<bool>&column,vector<bool>&leftDig,vector<bool>&rightDig){
    if(row==n){
        ans.push_back(Board);
        return;
    }
    for(int j=0;j<n;j++){
        if(column[j]==0 && leftDig[n-1+j-row]==0 && rightDig[row+j]==0){
            column[j]=1;
            Board[row][j]='Q';
            leftDig[n-1+j-row]=1;
            rightDig[row+j]=1;
            find(row+1,n,ans,Board,column,leftDig,rightDig);
            column[j]=0;
            Board[row][j]='.';
            leftDig[n-1+j-row]=0;
            rightDig[row+j]=0;
        }
    }
}
vector<vector<string>> solveNQueens(int n){
    vector<vector<string>>ans;
    vector<string>Board(n);
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    Board[i].push_back('.');
    vector<bool>leftDig(2*n-1,0);
    vector<bool>rightDig(2*n-1,0);
    
    vector<bool> column(n,0);

    find(0,n,ans,Board,column,leftDig,rightDig);
    return ans;
}

int main() {
    int n=4;
    vector<vector<string>> result=solveNQueens(n);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<n;j++){
            cout<<result[i][j]<<endl;
        }
        cout<<endl;
    }
    
    return 0;
}