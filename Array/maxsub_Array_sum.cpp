// #include<iostream>
// #include <climits>
// // Brute force approch the complexity is big o n sqaure 
// using namespace std;
// int main(){
//     int n=9;
//     int arr[9]={-2, 1, -3, 4, -1, 2, 1, -5, 4};

//     int maxSum=INT_MIN;
//     for(int st=0;st<n;st++){
//         int currSum=0;
//         for(int end=st;end<n;end++){
//             currSum+=arr[end];
//             maxSum=max(currSum,maxSum);
        
//         }
//     }
//     cout<<"MAx subarray sum = "<<maxSum<<endl;
//     return 0;
// }


#include<iostream>
#include <climits>

// thia is kadane's algorithms
using namespace std;
int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    int currSum=0,maxSum=INT_MIN; 

    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if (currSum<0){
            currSum=0;
        }
    }
    cout<<"max sub is:"<<maxSum;
    return 0;
} 


