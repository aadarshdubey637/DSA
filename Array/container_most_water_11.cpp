// this is the brute force approach
// #include<iostream>
// #include<vector>
// using namespace std;

// int maxArea(vector<int> & height){
//     int maxWater=0;
//     for(int i=0;i<height.size();i++){
//         for(int j=i+1;j<height.size();j++){
//             int w=j-i;
//             int ht=min(height[i],height[j]);
//             int currMax=w*ht;

//             maxWater=max(currMax,maxWater);
//         }
//     }
//     return maxWater;
// }
// int main(){
//     vector<int> v={1,8,6,2,5,4,8,3,7};
//     cout<<maxArea(v);
//     return 0;

// }



// this is a two pointer approch
#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int> &height){
    int lp=0,rp=height.size()-1;
    int maxWater=0;
    while(lp<rp){
        int w=rp-lp;
        int ht=min(height[lp],height[rp]);
        int currWater=w*ht;
        maxWater=max(maxWater,currWater);

        height[lp]<height[rp]?lp++:rp--;
    }
    return maxWater;

}
int main(){
     vector<int> v={1,8,6,2,5,4,8,3,7};
    cout<<maxArea(v);
    return 0;

}