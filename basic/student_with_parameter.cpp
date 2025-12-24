#include<iostream>
using namespace std;
class student {
    private:
    int n;
    int arr[50];
    public:

    void input(){
        cout<<"enter the number of student:";
        cin>>n;
        
        cout<<"Enter of marks of each student\n";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }

    int getAvg(){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return (float) sum/n; 
    }

    int highest(){
        int highest=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>highest){
                highest=arr[i];
            }
        }
        return highest;
    }
    int studentCount(){
        int cout=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=60){
                cout++;
            }
        }
        return cout;
    }
};
int main(){
    student obj;
    obj.input();   
    cout<<"Highest is:"<<obj.highest()<<endl;
    cout<<"Average is:"<<obj.getAvg()<<endl;
    cout<<"Passing student is:"<<obj.studentCount()<<endl;
    return 0;

}


// int main (){
//     int n;
//     cout<<"Enter the number of student:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0,studentCount=0;
//     int highest=arr[0];
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
    
//     if(arr[i]>highest){
//         highest=arr[i];
//     }
//     if(arr[i]>=60){
//         studentCount++;
//     }
// }
//     float  avg=sum/n;
//     cout<<"Sum is:"<<sum<<endl;
//     cout<<"Highest is:"<<highest<<endl;
//     cout<<"Average is:"<<avg<<endl;
//     cout<<"passing student is:"<<studentCount<<endl;
//     return 0;

// }