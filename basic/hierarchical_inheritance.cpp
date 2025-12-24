#include <iostream>
using namespace std;
class student{
    int roll;
    string name;
    public:
    void input(){
        cout<<"Enter the roll no of student:";
        cin>>roll;
        cout<<"Enter the name of student:";
        cin>>name;
    }
    void display(){
        cout<<"Roll no is:"<<roll<<endl;
        cout<<"Name of student is:"<<name<<endl;
    }
};
class sportStudent:public student{
    int sName;
    int  Achivemnet;
    public:
    void input1(){
        cout<<"Enter the sport name:";
        cin>>sName;
        cout<<"Enter the Achivement:";
        cin>>Achivemnet;
    }
    void display1(){
        cout<<"Sport name is:"<<sName<<endl;
        cout<<"Achivemenet is:"<<Achivemnet<<endl;
    }
};
class AcademicStudent:public student{
    int m1,m2,m3;
    public:
    void input2(){
        cout<<"Enter the marks of first student";
        cin>>m1;
        cout<<"Enter the marks of second student";
        cin>>m2;
        cout<<"Enter the marks of third student";
        cin>>m3;
    }
    void display2(){
        cout<<"first student marks is:"<<m1<<endl;
        cout<<"second student marks is:"<<m2<<endl;
        cout<<"third student marks is:"<<m3<<endl;

    }
};
class ArtStudent:public student{
    int count;
    string artForm;
    public:
    void input3(){
        cout<<"Enter the award cout :";
        cin>>count;
        cout<<"Enter the arts form:";
        cin>>artForm;
    }
    void display3(){
        cout<<"Award is:"<<count<<endl;
        cout<<"Artsform is"<<artForm<<endl;
    }
};
int main() {
    ArtStudent obj;
    obj.input();
    obj.display();
    
    return 0;
}