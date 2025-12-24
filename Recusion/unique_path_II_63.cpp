#include <iostream>
#include<vector>
using namespace std;
int helper(vector<vector<int>>& obstacleGrid,int r,int c,vector<vector<int>>&dp){
    int n=obstacleGrid.size();
        int m = obstacleGrid[0].size();
        if(r>=n||c>=m||obstacleGrid[r][c]==1){
        return 0;
    }
     if(r==n-1&& c==m-1){
        return 1;
    }
    if(dp[r][c]!=-1){
        return dp[r][c];
    }

    dp[r][c]= helper(obstacleGrid,r+1,c,dp)+helper(obstacleGrid,r,c+1,dp);
    return dp[r][c];
}
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int n=obstacleGrid.size();
        int m = obstacleGrid[0].size();
    vector<vector<int>> dp(n,(vector<int>(m,-1)));
    return helper(obstacleGrid,0,0,dp);
    }

int main() {
        vector<vector<int>> mat={{0,0,0},{0,1,0},{0,0,0}};
        cout<<uniquePathsWithObstacles(mat);
    
    return 0;
}