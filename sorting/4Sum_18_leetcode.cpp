#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
// vector<vector<int>> fourSum(vector<int>& nums){
//     int n=nums.size();
//     vector<vector<int>> ans;
//     sort(nums.begin(),nums.end());
//     for(int i=0;i<n;i++){
//         if(i>0 && nums[i] ==nums[i-1]) continue;

//         for(int j=i+1;j<n;j++){
//             if(j>i+1 && nums[j]==nums[j-1]) continue;

//         int k=j+1,l=n-1;
//         while(k<l){
//             long sum=nums[i]+nums[j]+nums[k]+nums[l];
//             if(sum<0){
//                 ++k;
//             }else if(sum>0){
//                 --l;
//             }else{
//                 ans.push_back({nums[i],nums[j],nums[k],nums[l]});
//                 ++k;--l;
//                 while(k<l && nums[k]==nums[k-1]) ++k;
//                 while(k<l && nums[l]==nums[l+1]) --l;
//             }
//         }
//     }
// }
//     return ans;
// }
// int main(){
//     vector<int> v={1,0,-1,0,-2,2};
//     vector<vector<int>> result=fourSum(v);
//     for(auto trip:result){
//     for(auto x:trip){
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }
//     return 0;
// }  

vector<vector<int>> fourSum(vector<int> &nums,int tar){
    int n=nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1 && nums[j]==nums[j-1])continue;
            int p=j+1,q=n-1;
            while(p<q){
                long sum=(long)nums[i]+nums[j]+nums[p]+nums[q];
                if(sum<tar){
                    p++;
                }else if(sum>tar){
                    q--;
                }else{
                    ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                    p++;q--;

                    while(p<q && nums[p]==nums[p-1]) ++p;
                    while(p<q && nums[q]==nums[q+1])++q;

                }
            }
        }
    }
    return ans;
}
int main(){
    vector<int> v={1,0,-1,0,-2,2};
    int tar=0;
    vector<vector<int>> result=fourSum(v,tar);
    for(auto trip:result){
    for(auto x:trip){
        cout<<x<<" ";
    }
    cout<<endl;
}
    return 0;
}  