// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={1,2,3,4,5};
//     // vector<int>::iterator it;
//     // for(it=vec.begin();it !=vec.end();it++){
//     //     cout<<*(it)<<" ";
//     // }
//     // cout<<endl;
//     for(auto it=vec.begin();it!=vec.end();it++){
//         cout<<*(it)<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(3);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}