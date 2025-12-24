// #include<iostream>
// using namespace std;
// int minofTwo(int a,int b){
//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }
// }
// int main(){
//     cout<<"Min :"<<minofTwo(5,3)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int sumN(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }

//     return sum;
// }
// int main(){
// cout<<sumN(5)<<endl;

//     return 0;
// }


// calaculate the sum of digit
// #include<iostream>
// using namespace std;
// int sumOfdigit(int num){
//     int digitsum=0;
//     while(num>0){
//         int lastDigit=num%10;
//         num=num/10;
//         digitsum+=lastDigit;
//     }
//     return digitsum;
// }
// int main (){
//     cout<<"Sum is:"<<sumOfdigit(2356)<<endl;
//     return 0;
// }

// calculate nCr binomial coefmficient for n&r

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;

// }
// int nCr(int n,int r){
//     int fact_n=factorial(n);
//     int fact_r=factorial(r);
//     int fact_nmr=factorial(n-r);

//     return fact_n / (fact_r*fact_nmr);

// }
// int main(){
//     int n=8,r=2;
//     cout<<"nCr is="<<nCr(n,r)<<endl;
//     return 0;
// }


// WAF to check if a number is prime or not
// #include<iostream>
// using namespace std;
// void prime(int n){
//     int count=0;
//     for(int i=1;i<=n;i++){
//         if (n%i==0){
//             count++;
//         }
//     }
//     if(count==2){
//         cout<<"it is prime"<<endl;
//         }
//     else{
//         cout<<"it is not prime";
//         }
// }
// int main (){
//     prime(4);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void prime(int n){
//     for(int i=2;i<=n;i++){
//         int count=0;
//         for (int j=1;j<=i;j++){
//             if(i%j==0){
//                 count++;
//             }
//         }
//         if(count==2){
//             cout<<i<<" ";
//         }
//     }
// }
// int main (){
//     int n;

//     cout<<"Enter a number";
//     cin>>n;
//     // cout<<"Prime number iprime(n);
//     prime(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int Fibonanci(int n){
//     int a=0,b=1,c;
//     cout<<"Fibonacci series ";
//     for(int i=0;i<=n;i++){
//         cout<<a<<" ";
//         c=a+b;
//         a=b;
//         b=c;
//     }
// }
// int main (){
//     int n;
//     cout<<"Enter number of term";
//     cin>>n;
//   Fibonanci(5);
//     return 0;
// }














