#include<bits/stdc++.h>
using namespace std;

int sqrt(int n){
	int start = 0;
	int end = n;
	int mid = start+(end-start)/2;
	int ans = -1;
	
	while(start <= end){
		if(mid*mid == n){
			return mid;
		}
		else if(mid*mid > n){
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

double sqrtFloat(int n, int res, int precision){
	
	double factor = 1;
	double ans = res;	
	
	for(int i=0; i<precision; i++){
		factor = factor/10;
		for(double j=ans; j*j<n; j=j+factor){
			ans = j;
		}
	} 
	return ans;
}

int main(){
	int n;
	cout<<"Enter Number : ";
	cin>>n;

	int res = sqrt(n);
	cout<<"sqrt of float number: "<<sqrtFloat(n,res,3)<<endl; 
}
