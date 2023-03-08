// Find a unique element in an array of size N where N is 2m+1. Here, m is present
// twice but one number is present only one time. Find that unique number. 

#include<bits/stdc++.h>
using namespace std;

//approach, eliminate every element present twice and find unique one by 
//xor operation
//0^0/1^1=0; 0^1/1^0=1

int findUnique(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }

    cout<<ans<<endl;
}

int main(){
    int arr[7]={3,5,7,5,7,4,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    findUnique(arr,size); 
}