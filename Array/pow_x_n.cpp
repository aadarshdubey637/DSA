#include<iostream>
using namespace std;
double myPow(double x,int n){
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x == -1 && n%2 == 0) return 1.0;
    if(x == -1 && n%2 != 0) return -1.0;

    long binFrom = n;
    if(n<0){
        x=1/x;
        binFrom =-binFrom;
    }
    double ans =1;
    while (binFrom>0){
        if(binFrom %2==1){
            ans*=x;
        }
        x*=x;
        binFrom/=2;
    }
    return ans;
}
int main(){
     double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    double result = myPow(base, exponent);
    cout << base << " raised to the power " << exponent << " is " << result << endl;
   
    return 0;
}


