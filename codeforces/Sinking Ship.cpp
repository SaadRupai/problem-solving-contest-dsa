/*The ship crashed into a reef and is sinking. Now the entire crew must be evacuated. All n crew members have already lined up in a row (for convenience let's label them all from left to right with positive integers from 1 to n) and await further instructions. However, one should evacuate the crew properly, in a strict order. Specifically:

The first crew members to leave the ship are rats. Then women and children (both groups have the same priority) leave the ship. After that all men are evacuated from the ship. The captain leaves the sinking ship last.

If we cannot determine exactly who should leave the ship first for any two members of the crew by the rules from the previous paragraph, then the one who stands to the left in the line leaves the ship first (or in other words, the one whose number in the line is less).

For each crew member we know his status as a crew member, and also his name. All crew members have different names. Determine the order in which to evacuate the crew.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string name[100],title[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>name[i]>>title[i];
    }
    for(int i=0; i<n; i++){
        if(title[i] == "rat"){
            cout<<name[i]<<endl;
        }      
    }
    for(int i=0; i<n; i++){
        if(title[i] == "woman" || title[i] == "child"){
            cout<<name[i]<<endl;
        }     
    }
    for(int i=0; i<n; i++){
        if(title[i] == "man"){
            cout<<name[i]<<endl;
        }     
    }
    for(int i=0; i<n; i++){
        if(title[i] == "captain"){
            cout<<name[i]<<endl;
        }     
    }

    return 0;
}