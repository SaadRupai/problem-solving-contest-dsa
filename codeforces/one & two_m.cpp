/* You are given a sequence a1,a2,…,an. Each element of a is 1 or 2

.

Find out if an integer k

exists so that the following conditions are met.

    1≤k≤n−1

, and
a1⋅a2⋅…⋅ak=ak+1⋅ak+2⋅…⋅an

    . 

If there exist multiple k
that satisfy the given condition, print the smallest.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=0;
		int idx2[1000];
		int a;
		for(int i=1; i<=n; i++){
			cin>>a;
			if(a == 2){
				idx2[count+1] = i;
				count++;
			}
		}
		if(count == 0){
			cout<<1<<endl;
		}
		else {
			if(count%2 == 0){
				cout<<idx2[count/2]<<endl;
			} 
			else{
				cout<<-1<<endl;
			}
		}
	}
}
