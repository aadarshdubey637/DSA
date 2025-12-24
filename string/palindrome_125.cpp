// #include<iostream>
// #include <string>
// #include <algorithm>

// using namespace std;
// int main(){
//     string str="Madam";
//     string revers=str;
//     reverse(revers.begin(),revers.end());
//     if(str==revers){
//         cout<<"its palinfrome:"<<str;
//     }else{
//         cout<<"its not palindrome";
//     }
//     return 0;
// }


#include<iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;
bool isAlphaNum(char ch){
    return isalnum(ch);
}

bool isPalindrome(string s){
    int st=0,end=s.length()-1;
    while(st<end){
        if(!isAlphaNum(s[st])){
            st++; continue;
        }if(!isAlphaNum(s[end])){
            end--; continue;
        }if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++;end--;
    }
    return true;
}
int main(){
    string s="madaM";
    cout<<isPalindrome(s);
    return 0;

}
