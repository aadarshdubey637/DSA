#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"Enter the "<<i+1<<"st element of array:";
        cin>>arr[i];
    }
    int max_value=arr[0];
    int min_value=arr[0];
    for (int i=1;i<n;i++){
        if(arr[i]>=max_value){
            max_value=arr[i];
        }
        if(arr[i]<=min_value){
            min_value<=arr[i];
        }
    }
    cout<<"Max value is:"<<max_value<<endl;
    cout<<"Min value is:"<<min_value;
       return 0;


}