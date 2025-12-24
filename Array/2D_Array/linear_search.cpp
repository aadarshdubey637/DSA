// using pair and return pair off this particular index
// #include <iostream>
// using namespace std;
// pair<int,int> linearSearch(int mat[][3],int row,int col,int key){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(mat[i][j]==key){
//                 return {i,j};
//             }
//         }
//     }
//     return {-1,-1};
// }
// int main() {
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int row=4;
//     int col=3;
//     pair<int,int> ans=linearSearch(matrix,row,col,8);
//     cout<<"Row: "<<ans.first<<", col: "<<ans.second <<endl;
//     return 0;
// }

// it is simple return 1 and 0
#include <iostream>
using namespace std;
bool linearSearch(int mat[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int main() {
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int col=3;
    cout<<linearSearch(matrix,row,col,8)<<endl;
    return 0;
}