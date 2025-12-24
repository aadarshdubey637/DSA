#include<iostream>
#include <string>

using namespace std;
int main(){
    int student;
    cout<<"Enter the size of the student:";
    cin>>student;

    int roll_no[student];
    cout<<"Enter the roll_no of"<<student<<"student";   
    for(int i=0;i<student;i++){
        cin>>roll_no[i];
    }
    int search_no;
    cout<<"Enter the serach roll_no:";
    cin>>search_no;
    string line;
    getline(cin, line);


    int found=false;
    int index=1;
    for(int i=0;i<student;i++){
        if(roll_no[i]==search_no){
            found=true;
            index=i;  
            break;
        }
    }
    if(found){
        cout<<"Found succefull at index position is:"<<index;
    }

    else{
        cout<<"Not found";
    }
        return 0;

}