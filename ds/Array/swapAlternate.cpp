//swap alternate elements in an array (first with second, third with fourth, 
// last wil remain as it is if size of the array is odd)

#include<bits/stdc++.h>
using namespace std;

int swapAlternate(int arr[], int size){
    for(int i=0; i<size;i+=2){
        if(i+1<size){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

int printArray(int arr[], int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int even[6]={12,5,3,8,6,2};
    int odd[5]={12,3,8,6,2};
    // int size= sizeof(even)/sizeof(even[0]);
    int size= sizeof(odd)/sizeof(odd[0]);
    swapAlternate(odd,size);
    printArray(odd,size);

}
