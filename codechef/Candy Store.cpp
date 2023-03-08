/*Chef has started working at the candy store. The store has 100100 chocolates in total.

Chef’s daily goal is to sell XX chocolates. For each chocolate sold, he will get 11 rupee. However, if Chef exceeds his daily goal, he gets 22 rupees per chocolate for each extra chocolate.

If Chef sells YY chocolates in a day, find the total amount he made.*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,amount, extraAmount;
        amount=0;
        extraAmount=0;
        cin>>x>>y;
        if(y <= 100){
            if(y>x){
                extraAmount = (y-x)*2;
                amount = x*1 + extraAmount; 
                cout<<amount<<endl;
            }
            else{
                amount = y*1;
                cout<<amount<<endl;
            }
        }
        else{
            cout<<"Total chocolate number exceeded"<<endl;
        }
    }
}