// #include <iostream>
// using namespace std;
// void printNum(int n){
//     if(n==1){
//         cout<<"1\n";
//         return ;
//     }
//     cout<<n<<" ";
//     printNum(n-1);
// }

// int main() {
//     printNum(100);
//     return 0;
// }


#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }

        return n*factorial(n-1);
}
int main() {
    cout<<factorial(4);
    return 0;
}

