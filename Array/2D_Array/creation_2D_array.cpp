#include <iostream>
using namespace std;

int main() {
    int row,col;
    cout<<"Enter the value of row:";
    cin>>row;
    cout<<"Enter the value of col:";
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        cout<<"Enter the element ofrow"<<i+1<<":";
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nMatrix is:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}