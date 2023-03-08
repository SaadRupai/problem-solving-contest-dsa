/*
Taisia has n
six-sided dice. Each face of the die is marked with a number from 1 to 6, each number from 1 to 6

is used once.

Taisia rolls all n
dice at the same time and gets a sequence of values a1,a2,…,an (1≤ai≤6), where ai is the value on the upper face of the i-th dice. The sum of this sequence is equal to s

.

Suddenly, Taisia's pet cat steals exactly one dice with maximum value ai
and calculates the sum of the values on the remaining n−1 dice, which is equal to r

.

You only know the number of dice n
and the values of s, r. Restore a possible sequence a

that fulfills the constraints.
Input

The first line contains the integer t
(1≤t≤1000

) — the number of testcases.

Each testcase is given on a separate line and contains three integers n
, s, r (2≤n≤50, 1≤r<s≤300

).

It is guaranteed that a solution exists.
Output

For each testcase, print: n
integers a1,a2,…,an

in any order. It is guaranteed that such sequence exists.

If there are multiple solutions, print any.
*/




#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, s, r,t;
	cin>>t;
	while(t--){
		cin>>n>>s>>r;
		int arr[n];
		arr[0] = s-r;
		for(int i = 1; i<n; i++){
			arr[i] = r/(n-1);
		}
		int mod = r%(n-1);
		for(int i=1; i<n;i++){
			if(mod != 0){
				if((arr[i]<=6 && arr[i]>=1) && arr[i]<=arr[0]){
				arr[i]++;
				mod--;
			}
			}
		}
		
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
	}
	}
}
