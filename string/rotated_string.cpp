#include <iostream>
using namespace std;

void rotatedclockwise(string &s){
    char c=s[0];
    int index=1;
    while(index<=s.size()){
        s[index-1]=s[index];
        index--;
    };
    s[s.size()-1]=c;

}
void Anticlockwise(string &s){
    char c=s[s.size()-1];
    int index=s.size()-2;
    while(index>=0){
        s[index+1]=s[index];
        index--;
    };
    s[0]=c;
}
bool isRotated(string str1,string str2){
    if(str1.size()!=str2.size())
        return 0;

    string clockwise,anticlockwise;

    clockwise=str1;
    rotatedclockwise(clockwise);
    rotatedclockwise(clockwise);
    
    if(clockwise==str2)
        return 1;


    anticlockwise=str1;
    Anticlockwise(anticlockwise);
    Anticlockwise(anticlockwise);

    if(anticlockwise==str2)
        return 1;

    return 0;
    
}
int main() {
    string str1="amazon";
    string str2="azonam";
    isRotated(str1,str2);
    return 0;
}