
// calculate factorial using itrative method
// #include<iostream>
// using namespace std;
// int main(){
//     int fact=1;
//     int n;
//     cout<<"Enter the value of n";
//     cin>>n;

//     for (int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<"Factorial is:"<<fact;

//     return 0;
// }

#include<iostream>
using namespace std;
    int factorial_recursive(int n){
        if(n==0||n==1)return 1;
        return n*factorial_recursive(n-1);
    }
    int main(){
        int n;
        cout<<"Enter n";
        cin>>n;
        cout<<"Recusive"<<factorial_recursive(n)<<endl;
      return 0;
}
