/*Chef has to attend an exam that starts in XX minutes, but of course, watching shows takes priority.

Every episode of the show that Chef is watching, is 2424 minutes long.
If he starts watching a new episode now, will he finish watching it strictly before the exam starts?*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>24){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}