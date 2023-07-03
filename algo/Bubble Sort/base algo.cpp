// in every round(ith round), the largest element(ith largest element) of that round will be at right place. if n elements, so in (n-1) round,
// all elements will be sorted
// in every round, all elements will be traversed in every round till i-1 element   | ****
// stable
// in place sort
// important

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
    
    for(int i=0; i<n ; i++){
        for(int j=0; j<n-i; j++){           // all elements will be traversed in every round till n-i element
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    // we can optimmize this algo to O(n) by simply checking if swapping is occurring or not

    for(int i=0; i<n ; i++){
        bool swapped = false;           // for checking swapping
        for(int j=0; j<n-i; j++){          
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }


    for(int i=0; i<n; i++){
        cout<< arr[i];
    }
    
    return 0;
}

