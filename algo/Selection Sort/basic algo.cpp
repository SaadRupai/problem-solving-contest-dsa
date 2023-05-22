#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    
    // in every round, find the mimimum and swap it with key
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                swap(arr[i], arr[j]);
                continue;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<< arr[i];
    }
    
    return 0;
}