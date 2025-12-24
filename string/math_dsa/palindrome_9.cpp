#include<iostream>
using namespace std;
int reverse(int n){
    int reverse=0;
    while(n!=0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;

    }
    return reverse;
}
bool isPalindrome(int n){
    if (n<0) return false;

    int revNum=reverse(n);
    return  n==revNum;
}
int main(){
    int n=1021;
    if(isPalindrome(n)){
        cout<<n<<" is palinrome"<<endl;
    }else{
        cout<<n<<" is not palinrome"<<endl;
    }
    return 0;
} 