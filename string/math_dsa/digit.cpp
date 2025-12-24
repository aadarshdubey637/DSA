#include<iostream>
#include<vector>
using namespace std;
void printDigit(int n){
    int sum=0;
    int count=0;
    while(n!=0){
        int digit=n%10;
        count++;
        n=n/10;
    }
    cout<<count<<endl;
}
int main(){
    int n=3568;
    printDigit(n);
    return 0;
}