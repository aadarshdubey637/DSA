// #include<iostream>
// using namespace std;
// string isPrime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return "Non prime";
//         }
//     }
//     return "prime";
// }
// int main(){
//     int n=42;
//     cout<<isPrime(n)<<endl;
//     return 0;
// }


//  sieve of eratosthenes 
#include<iostream>
#include<vector>
using namespace std;
int countPrime(int n){
    vector<bool> isPrime(n+1,true);
        int count=0;
        
        for(int i=2;i<n;i++){
            if(isPrime[i]){
                count++;

                for(int j=i*2;j<n;j=j+i){
                    isPrime[j]=false;
                }
            }
        }
        return count;
    }
int main(){
    int n=50;
    cout<<countPrime(n)<<endl;
    return 0;
}
