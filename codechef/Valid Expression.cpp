/*The correct way of evaluating an expression with ∗,+,∗,+, and −− is, first multiplication, then addition, and then subtraction. For example, the expression 2+3∗7−5=2+21−5=23−5=182+3∗7−5=2+21−5=23−5=18.

You are given integers NN and XX. Your task is to generate a string SS of length NN consisting only of ∗,+,∗,+, and −− such that when these NN operators are placed in order between (N+1)(N+1) ones, the result of the expression becomes XX.
For example, if S=S= ++-*-, the resulting expression is 1+1+1−1∗1−11+1+1−1∗1−1, which is then evaluated based on the rules above.

If multiple such strings exist, print any of them. If no such string exists, print −1−1 instead.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        int numOfOne;
        int mul,add;
        mul=0;
        add=0;
        int sub;
        sub=0;
        numOfOne = n+1;
        if(x == 0){
            if(n%2 == 0){
                cout<<"-1"<<endl;
            }
            else{
                add = n/2;
                sub = n-add;
                while(add--){
                    cout<<"+";
                }
                while(sub--){
                    cout<<"-";
                }
                cout<<endl;
            }
        }
        else if(x>0){
            if(numOfOne == x){
                while(n--){
                    cout<<"+";
                }
                cout<<endl;
            }
            else if(numOfOne > x){
                mul = numOfOne-x;
                add = n-mul;
                while(mul--){
                    cout<<"*";
                }
                while(add--){
                    cout<<"+";
                }
                cout<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
        else{
            if(numOfOne <= (-x)){
                cout<<"-1"<<endl;
            }
            else if(n == (-x)){
                cout<<"-1"<<endl;
            }
            else if(numOfOne-2 == (-x)){
                while(n--){
                    cout<<"-";
                }
                cout<<endl;
            }
            else if(numOfOne-2 > (-x)){
                sub = (-x)+1;
                mul = n-sub;
                while(mul--){
                    cout<<"*";
                }
                while(sub--){
                    cout<<"-";
                }
                cout<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
    } 
}