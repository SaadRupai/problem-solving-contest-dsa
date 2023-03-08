/*Alice and Bob recently got into running, and decided to compare how much they ran on different days.

They each ran for NN days — on the ithith day, Alice ran AiAi​ meters and Bob ran BiBi​ meters.

On each day,

    Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
    Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.

For example, on a given day

    If Alice ran 200200 meters and Bob ran 500500, Alice would be unhappy but Bob would be happy.
    If Alice ran 500500 meters and Bob ran 240240, Alice would be happy and Bob would be unhappy.
    If Alice ran 300300 meters and Bob ran 500500, both Alice and Bob would be happy.

On how many of the NN days were both Alice and Bob happy?*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int brr[n];
        int uh=0;
        int hp=0;
        int count=0;
        for(int i=0; i<n ;++i){
            cin>>arr[i];
        }
        for(int i=0; i<n ;++i){
            cin>>brr[i];
        }
        for(int i=0; i<n; i++){
            if(arr[i] > brr[i]*2 || brr[i] > arr[i]*2){
                continue;
            }
            else{
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}