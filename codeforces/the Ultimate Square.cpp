// You have n rectangular wooden blocks, which are numbered from 1 to n. The i-th block is 1 unit high and ⌈i2⌉

// units long.

// Here, ⌈x2⌉
// denotes the result of division of x by 2, rounded up. For example, ⌈42⌉=2 and ⌈52⌉=⌈2.5⌉=3

// .

// For example, if n=5
// , then the blocks have the following sizes: 1×1, 1×1, 1×2, 1×2, 1×3

// .
// The available blocks for n=5

// Find the maximum possible side length of a square you can create using these blocks, without rotating any of them. Note that you don't have to use all of the blocks.
// One of the ways to create 3×3
// square using blocks 1 through 5


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int ans = (n+1)/2;
        cout<<ans<<endl;
    }
}