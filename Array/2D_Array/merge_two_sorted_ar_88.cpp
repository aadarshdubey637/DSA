#include <iostream>
#include<vector>
using namespace std;
void merge(vector<int> &A,int n,vector<int> &B,int m){
    int idx=m+n-1, i=n-1,j=m-1;
    while(i>=0 && j>=0){
        if(A[i]>=B[j]){
            A[idx--]=A[i--];
        }else{
            A[idx--]=B[j--];
        }
    }
    while(j>=0){
        A[idx--]=B[j--];
    }
}

int main() {
    vector<int> num1={1,2,3,0,0,0};
    vector<int> num2={2,5,6};
    int n=3;
    int m=3; 
    merge(num1,n,num2,m);
    for(int x:num1){
        cout<<x<<" ";
    }

    return 0;
}