#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subArrayDivByK(vector<int> &nums, int k){
    unordered_map<int, int> freq; 
    freq[0] = 1;  // Very important: empty prefix

    int prefix = 0, count = 0;

    for(int x : nums){
        prefix += x;

        int rem = prefix % k;
        if(rem < 0) rem += k;  // handle  negative remainder

        if(freq.find(rem) != freq.end()){
            count += freq[rem];
        }

        freq[rem]++;
    }

    return count;
}

int main() {
    vector<int> v = {4,5,0,-2,-3,1};
    int k = 5;
    cout << subArrayDivByK(v, k);
    return 0;
}
 