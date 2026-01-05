#include <iostream>
#include<vector>
using namespace std;

string sortSentence(string s) {
    vector<string> ans(10);
    string temp;
    int count=0,index=0;
    while(index<s.size()){
        if(s[index]==' '){
            int pos=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp;
            temp.clear();
            count++;
        }
        else{
            temp+=s[index];
        }
        index++;
    }
         int pos=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp;
            temp.clear();
            count++;

    for(int i=1;i<10;i++){
        if(ans[i].size()>0){
        temp+=ans[i]+ ' ';
    }
}
    temp.pop_back();
    return temp;
        
}
int main() {
    string s= "is2 sentence4 This1 a3";
    cout<<sortSentence(s);
    
    return 0;
}