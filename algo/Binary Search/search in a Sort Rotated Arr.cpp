#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n){
	int start = 0;
	int end = n-1;
	int mid = start+(end-start)/2;
	
	while(start < end){
		if(arr[mid] >= arr[0]){
			start = mid+1;
		}
		else{
			end = mid;
		}
		mid = start+(end-start)/2;
	}
	return end;
}

int binarySearch(int arr[], int st, int en, int key){
	int start = st;
	int end = en;
	int mid = start+(end-start)/2;
	
	while(start<=end){
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] > key){
			end = mid-1;
		}
		else{
			start = mid+1;
		}
		mid = start+(end-start)/2;
	}
	return -1;
}

int findPos(int arr[], int n, int key){
	int pivot = getPivot(arr, n);
	
	if(key >= arr[pivot] && key <= arr[n-1]){
		return binarySearch(arr, pivot, n-1, key);
	}
	else{
		return binarySearch(arr, 0, pivot-1, key);
	}
}

int main(){
	int arr[7] = {6,7,9,1,2,3,5};
	
	cout<<"Element is in index : "<<findPos(arr, 7, 2)<<endl;
}
