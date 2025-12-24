#include<iostream>
using namespace std;
struct  student
{
    int age;
    string name;
    int mo_no;
    string branch;
    string  university;
};


int main(){
    student s1,s2,s3,s4,s5;

    int age;
    cout<<"enter the age of student";
    cin>>s1.age;
    string name;
    cout<<"enter the name of student:";
    cin>>s1.name;
    int mo_no;
    cout<<"Enter the mo number:";
    cin>>s1.mo_no;
    string branch;
    cout<<"Enter the branch ";
    cin>>s1.branch;
    string university;
    cout<<"Enter the university name";
    cin>>s1.university;


    cout<<"\nenter the age of second student";
    cin>>s2.age;
    cout<<"enter the name of student:";
    cin>>s2.name;
    cout<<"Enter the mo number:";
    cin>>s2.mo_no;
    cout<<"Enter the branch ";
    cin>>s2.branch;
    cout<<"Enter the university name";
    cin>>s2.university;

    
    cout<<"\nenter the age of  third student";
    cin>>s3.age;
    cout<<"enter the name of student:";
    cin>>s3.name;
    cout<<"Enter the mo number:";
    cin>>s3.mo_no;
    cout<<"Enter the branch ";
    cin>>s3.branch;
    cout<<"Enter the university name";
    cin>>s3.university;


    cout<<"age:"<<s1.age<<endl;
    cout<<"name:"<<s1.name<<endl;
    cout<<"mo :"<<s1.mo_no<<endl;
    cout<<"branch"<<s1.branch<<endl; 


    
    cout<<"age:"<<s2.age<<endl;
    cout<<"name:"<<s2.name<<endl;
    cout<<"mo :"<<s2.mo_no<<endl;
    cout<<"branch"<<s2.branch<<endl; 

        
    cout<<"age:"<<s3.age<<endl;
    cout<<"name:"<<s3.name<<endl;
    cout<<"mo :"<<s3.mo_no<<endl;
    cout<<"branch"<<s3.branch<<endl; 
    return 0;

}