/*Chef is playing a video game, and is now fighting the final boss.

The boss has HH health points. Each attack of Chef reduces the health of the boss by XX.
Chef also has a special attack that can be used at most once, and will decrease the health of the boss by YY.

Chef wins when the health of the boss is ≤0≤0.
What is the minimum number of attacks needed by Chef to win?*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,x,y;
        cin>>h>>x>>y;
        int count=0;
        h=h-y;
        count++;
        if(h == 0){
            cout<<count<<endl;
        }
        else{
            while(h>0){
                h=h-x;
                count++;
            }
            cout<<count<<endl;  
        }
              
    }
    return 0;
}