//  binary number system and decimal number system
// #include<iostream>
// using namespace std;
// int deTobinary(int decN){
//     int ans=0,pow=1;
//     while(decN>0){
//         int rem=decN%2;
//         decN=decN/2;
//         ans+=(rem*pow);
//         pow=pow*10;
//     }
//     return ans;
// }
// int main(){
//     // int decN=7;
//     for(int i=1;i<=10;i++){
//     cout<<deTobinary(i)<<endl;
//     }
//     return 0;
// }

// decimal to binary
// # include<iostream>
// using namespace std;
// int binToDecimal(int binNum){
//     int ans=0,pow=1;
//     while(binNum>0){
//         int rem=binNum%10;
//         ans+=rem*pow;
        
//         binNum /=10;
//         pow*=2;
//     }ta';
//     return ans;
// }
// int main(){
//     cout<<binToDecimal(1010)<<endl;
//     return 0;
// }