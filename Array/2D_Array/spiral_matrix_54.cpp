#include <iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &mat){
    int m=mat.size(),n=mat[0].size();
    int sRow=0,sCol=0,eRow=m-1,eCol=n-1;
    vector<int>ans;
    while(sRow <= eRow && sCol <= eCol){
        // top
        for(int j=sRow;j<=eCol;j++){
            ans.push_back(mat[sRow][j]);
        }
        // right
        for(int i=sRow+1;i<=eRow;i++){
            ans.push_back(mat[i][eCol]);
        }
        // bottom
        for(int j=eCol-1;j>=sCol;j--){
            if(sRow==eRow){
                break;
            }
            ans.push_back(mat[eRow][j]);
        }
        // left 
        for(int i=eRow-1;i>=sRow+1;i--){
            if(sCol==eCol){
                break;
            }
            ans.push_back(mat[i][sCol]);
        }
        sRow++;eRow--;sCol++;eCol--;
    }
    return ans;
}

int main() {
    vector<vector<int>> v={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<int> result = spiralOrder(v);
    for( int dig:result){
        cout<<dig<<" ";
    }

    return 0;
}



// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& mat) {
//         int m=mat.size(),n=mat[0].size();
//         int sRow=0,sCol=0,eRow=m-1,eCol=n-1;
//         vector<int> ans;
//         while(sRow <= eRow && sCol <=eCol){
//             // top
//             for(int j=sRow;j<=eCol;j++){
//                 ans.push_back(mat[sRow][j]);
//             }
//             // right
//             for(int i=eRow+1;i<=eCol;i++){
//                 ans.push_back(mat[i][eCol]);
//             }
//             // bottom
//             for(int j=eCol-1;j>=sCol;j--){
//                 if(sRow==eRow){
//                     break;
//                 }
//                 ans.push_back(mat[eRow][j]);
//             }
//             // left
//             for(int i=eRow-1;i>=sRow+1;i--){
//                 if(sCol==eCol){
//                     break;
//                 }
//                 ans.push_back(mat[i][sCol]);
//             }
//             sRow++;eRow--;sCol++;eCol--;
//         }
//         return ans;
//     }
// };