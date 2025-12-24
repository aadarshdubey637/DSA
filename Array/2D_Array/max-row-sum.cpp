// max row
#include <iostream>
#include <climits> 
using namespace std;
int getMaxSum(int mat[][3],int row,int col){
    int maxRowSum=INT_MIN;
    for(int i=0;i< row;i++){
        int rowSumI=0;
        for(int j=0;j<col;j++){
            rowSumI+=mat[i][j];
        }
        maxRowSum=max(maxRowSum,rowSumI);
    }
    return maxRowSum;
}

int main() {
    int mat[4][3]={{1,2,3},{2,3,4},{5,6,7},{8,9,10}};
    int row=4;
    int col=3;
    cout<<getMaxSum(mat,row,col)<<endl;
    return 0;
}

