#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;

    int element[size];
    cout<<"Enter the "<<size<<" element:";
    for(int i=0;i<size;i++){
        cin>>element[i];
    }
    int even_count=0;
    int odd_count=0;
    cout<<"All Even Element is:";
    for(int i=0;i<size;i++){
        if(element[i]%2==0){
            cout<<element[i]<<" ";
            even_count++;
        }
    }
    cout<<endl;

    cout<<"All odd Element is:";
    for(int i=0;i<size;i++){
        if(element[i]%2!=0){
            cout<<element[i]<<" ";
            odd_count++;
        }
    }
    cout<<endl;
    cout<<"Total Even_no is:"<<even_count<<endl;
    cout<<"Total odd_no is:"<<odd_count<<endl;
    return 0;

}