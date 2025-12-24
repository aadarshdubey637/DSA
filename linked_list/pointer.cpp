#include <iostream>
using namespace std;

int main() {
    int a=10;
    cout<<&a<<endl;

    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    cout<<&ptr<<endl;


    int **ptr2=&ptr;
    cout<<ptr2;
    return 0;
}