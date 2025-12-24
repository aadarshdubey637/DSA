#include <iostream>
using namespace std;
class Electricity{
    private:
    int NO_householder;
    int each_householder[5];
    int even_cout;
    int odd_Cout;
    public:
     Electricity(int n){
         NO_householder=n;
         even_cout=0;
         odd_Cout=0;
     }
    void take_input(){
    cout<<"Enter the number of household:";
    for(int i=0;i<NO_householder;i++){
        cin>>each_householder[i];
        if(each_householder[i]%2==0)
            even_cout++;
        else
        odd_Cout++;
    }
}
void display(){
    cout<<"Total Even cusmption entries:"<<even_cout<<endl;
    cout<<"Total Odd cusmption entries:"<<odd_Cout<<endl;
}

};
int main(){
    int n;
    cout<<"Enter the household no:";
    cin>>n;
    Electricity a(n);
    a.take_input();
    a.display();
return 0;
}