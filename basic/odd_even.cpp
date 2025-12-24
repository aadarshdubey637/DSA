#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int result[n];
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            result[index++]=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2 !=0){
            result[index++]=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;


}