#include <iostream>
using namespace std;
void tohCol(int n,int sour,int help,int dis){
    if(n==1){
        cout<<"Move disk"<<n<<"from"<<sour<<"to"<<dis<<endl;
        return;
    }
    tohCol(n-1,sour,dis,help);
    cout<<"Move disk"<<n<<"from"<<sour<<"to"<<dis<<endl;
    tohCol(n-1,help,sour,dis);
}
long long toh(int n,int from,int to,int aux){
    tohCol(n,from,aux,to);
    return(2,n)-1;
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    // 1 = source, 2 = helper, 3 = destination
    tohCol(n, 1, 2, 3);
    
    return 0;
}
