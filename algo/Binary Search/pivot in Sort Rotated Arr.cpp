#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n){
	int start = 0;
	int end = n-1;
	int mid = start+(end-start)/2;
	
	while(start < end){
		if(arr[mid] > arr[0]){
			start = mid+1;
		}
		else{
			end = mid;
		}
		mid = start+(end-start)/2;
	}
	return end;
}

int main(){
	int arr[7] = {6,7,9,1,2,3,5};
	
	cout<< "pivot is: "<<getPivot(arr, 7)<<endl;
}
