// Monocarp is playing a computer game. He's going to kill n monsters, the i-th of them has hi

// health.

// Monocarp's character has two spells, either of which he can cast an arbitrary number of times (possibly, zero) and in an arbitrary order:

//     choose exactly two alive monsters and decrease their health by 1

//     ;
//     choose a single monster and kill it. 

// When a monster's health becomes 0

// , it dies.

// What's the minimum number of spell casts Monocarp should perform in order to kill all monsters?


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int arr[1000];
        cin>>n;
        int count1=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i] == 1){
                count1++;
            }
        }

        // n-count1 : monsters of health without 1 are removed in n-count1 steps (each at a time- second spell)
        
        // (count+1)/2 : two 1's reduced at a time, if three 1, then one more step needed, so
        // ceiling the value by +1 - first spell
        
        int ans = (n-count1)+((count1+1)/2);
        cout<<ans<<endl;
    }
}