// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     int gcd=1;
// for(int i=1;i<=min(a,b);i++){
//     if(a%i==0 && b%i==0){
//         gcd=i;
//     }
// }
// return gcd;
// }

// int  main(){
    
//     int a=20,b=28;
//     cout<<gcd(a,b);
//     return 0;
// }


// Euclid's algorithm
// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a=a%b;
//         }else{
//             b=b%a;
//         }
//     }

//     if(a==0)return b;
//     return a;
// }

// int main(){
//     int a=20,b=24;
//     cout<<gcd(a,b)<<endl;
//     return 0;
// }

// lcm
// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a=a%b;
//         }else{
//             b=b%a;
//         }
//     }

//     if(a==0)return b;
//     return a;
// }
// int lcm(int a,int b){
//     int g=gcd(a,b);
//     return (a*b)/g;
//     }

// int main(){
//     int a=20,b=24;
//     cout<<lcm(a,b)<<endl;
//     return 0;
// }