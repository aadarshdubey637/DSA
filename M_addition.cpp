#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter number of row and columb:";
    cin>>row>>col;

    int A[row][col],B[row][col],c[row][col];
    cout<<"Enter the value of first matrix:\n";
    for (int i = 0; i < row; i++){
        for(int j=0;j<col;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter the value of second matrix:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            c[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"Sum of A and B is:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}