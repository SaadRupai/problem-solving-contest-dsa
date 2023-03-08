//reverse a given array

#include<bits/stdc++.h>
using namespace std;

int printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// 2 pointer approach
int reverseArray(int arr[], int size){
    int left=0, right=size-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

int main(){
    int arr[5]={2,7,4,9,3};
    reverseArray(arr,5);
    printArray(arr,5);
}