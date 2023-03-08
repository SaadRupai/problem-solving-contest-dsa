/*Given an Integer N, write a program to reverse it.*/

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        while(n != 0){
            ans = ans*10 + (n%10);
            n = n/10;
        }
        cout<<ans<<endl;
    }


    return 0;
}