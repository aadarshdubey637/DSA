#include<iostream>
#include <string>
using namespace std;
int main(){
    // int len=0;
    // for(int i=0;i<str[i]!='\0';i++){
    //     len++;
    // }
    // cout<<len<<endl;

    char str[12];
    cout<<"Enter the stirng";

    cin.getline(str,100);//it used for char array
    // getline(cin,str) it use for string

    for(char ch:str){
        cout<<ch<<" ";
    }
    cout<<endl;
    
    
    return 0;
}
