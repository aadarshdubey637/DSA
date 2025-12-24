/*#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int target){
for(int i=0;i<n;i++){
if(arr[i]==target){
	return i;
	}
    }
	return -1;
}
int main(){
int n;
cout<<"Enter the size of array";
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cout<<"enter the element of array:"<<i+1;
cin>>arr[i];
}
int target;
cout<<"enter the search element";
cin>>target;
int result=linearSearch(arr,n,target);
if (result !=-1){
cout<<"Search succsefullly at index:"<<result<<endl;
}
else{
cout<<"Not found"<<endl;
}
return 0;
}*/


/*#include<iostream>
using namespace std;
void reverseArray(int arr[],int sz){
    int start=0,end=sz-1;
    while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }
}
int main(){
int sz;
cout<<"Enter the size of array :";
cin>>sz;
int arr[sz];
   for(int i=0;i<sz;i++){
   cout<<"Enter the element of array:";
   cin>>arr[i];
}
reverseArray(arr,sz);
for(int i=0;i<sz;i++){
cout<<arr[i]<<" ";
}
return 0;
}*/



/*#include<iostream>
using namespace std;
int sum(int arr[],int sz){
int sum=0;
for(int i=0;i<sz;i++){
   sum+=arr[i];
    }
	return sum;
}
int product(int arr[],int sz){
int product=1;
for(int i=0;i<sz;i++){
   product*=arr[i];
    }
	return product;
}
int main(){
int sz;
cout<<"Enter the size of array :";
cin>>sz;
int arr[sz];
   for(int i=0;i<sz;i++){
   cout<<"Enter the element of array:";
   cin>>arr[i];
}

    int total = sum(arr, sz);  // function call
    cout << "Sum is: " << total << endl;
    
    int result = product(arr, sz);  // function call
    cout << "product is: " << result << endl;
 
return 0;
}*/

/*#include<iostream>
using namespace std;
void minMax(int arr[],int size){
    int smallest=arr[0];
    int largest=arr[0];
    for(int i=0;i<size;i++){
        smallest=min(arr[i],smallest);
        largest=max(arr[i],largest);
    }
    cout<<"smallest = "<<smallest<<endl;
    cout<<"Largrst = "<<largest<<endl;
}
int main(){
int size;
cout<<"Enter the size of array :";
cin>>size;
int arr[size];
   for(int i=0;i<size;i++){
   cout<<"Enter the element of array:";
   cin>>arr[i];
}
minMax(arr,size);
    return 0;

}*/


/*#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the size of array :";
cin>>size;
int arr[size];
   for(int i=0;i<size;i++){
   cout<<"Enter the element of array:";
   cin>>arr[i];
}
int max=arr[0],min=arr[0];
int maxIndex=0,minIndex=0;
for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
        maxIndex=i;
    }
    if(arr[i]<min){
        min=arr[i];
        minIndex=i;
    }
}
cout<<"\nBefore swapping"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

int temp=arr[maxIndex];
arr[maxIndex]=arr[minIndex];
arr[minIndex]=temp;

cout<<"\nAfter swapping"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;

}*/

/*#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the size of array :";
cin>>size;
int arr[size];
   for(int i=0;i<size;i++){
   cout<<"Enter the element of array:";
   cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                cout<<arr[j]<<" ";
            }
        }
    }
return 0;
}*/






/*#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the size of array :";
cin>>size;
int arr[size];
   for(int i=0;i<size;i++){
   cout<<"Enter the element of array:";
   cin>>arr[i];
    }
    for(int i=0;i<size;i++){
    int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
              count++;
            }
        }
     if(count==1){
       cout<<arr[i]<<" ";
	} 
    }
return 0;
}*/


#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the size of array :";
cin>>size;
int arr[size];
   for(int i=0;i<size;i++){
   cout<<"Enter the element of first array:";
   cin>>arr[i];
   }
cout<<endl;
    int arr1[size];
   for(int i=0;i<size;i++){
   cout<<"Enter the element of second  array:";
   cin>>arr1[i];
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==arr1[j]){
                cout<<arr[i]<<" " ;
		break;
            }
        }
    }
return 0;
}

 










