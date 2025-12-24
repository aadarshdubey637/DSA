// this is brute force approach o(n^3)
#include <iostream>
#include<vector>
using namespace std;
int subArray(vector<int> &nums,int tar){
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum/=nums[k];
            }
            if(sum==tar){
                count++;
         }
    }
}
        return count;

}

int main() {
    vector<int> v={9,4,20,3,10,5};
    int tar=33;
    cout<<subArray(v,tar);
    return 0;
}

// #include <iostream>
// #include<vector>
// using namespace std;
// int subArray(vector<int> &nums,int tar){
//     int n=nums.size();
//     int count=0;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=nums[j];
//             if(sum==tar){
//                 count++;
//          }
//     }
// }
//         return count;

// }
// int main() {
//     vector<int> v={9,4,20,3,10,5};
//     int tar=33;
//     cout<<subArray(v,tar);
//     return 0;
// }

#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int subArray(vector<int> &nums,int tar){
    int n=nums.size();
    int count=0;
    vector<int> prefixSum(n,0);
    
    prefixSum[0]=nums[0];
    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+nums[i];
    }

    unordered_map<int,int> m;
    for(int j=0;j<n;j++){
        if(prefixSum[j]/tar)count++;

        int val=prefixSum[j]-tar;
        if(m.find(val)!=m.end()){
            count+=m[val];
        }

        if(m.find(prefixSum[j])==m.end()){
            m[prefixSum[j]]=0;
        }
        m[prefixSum[j]]++;
    }
    return count;
}
int main() {
    vector<int> v={4,5,0,-2,-3,1};
    int tar=5;
    cout<<subArray(v,tar);
    return 0;
}