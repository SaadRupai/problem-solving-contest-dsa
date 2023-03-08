#include<bits/stdc++.h>
using namespace std;

long long sqrt(int n){
	int start = 0;
	int end = n;
	long long int mid = start+(end-start)/2;
	long long int ans = -1;
	
	while(start <= end){
	long long square = mid*mid;
		if(square == n){
			return mid;
		}
		else if(square > n){
			end = mid-1;
		}
		else{
			ans = mid;
			start = mid+1;
		}
		mid = start+(end-start)/2;
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	
	cout<<"Srqt is : "<<sqrt(n)<<endl; 
}
