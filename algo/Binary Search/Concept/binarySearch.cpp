#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
	int start = 0;
	int end = size-1;
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

int main(){
	int even[6] = {2,4,6,9,14,17};
	int odd[5] = {1,3,7,9,13};
	
	int sizeEven = sizeof(even)/sizeof(even[0]);
	int sizeOdd = sizeof(odd)/sizeof(odd[0]);
	
	// for even array
	cout<<"Index of element 14 is: "<<binarySearch(even,sizeEven,14)<<endl;
	
	//for odd array
	cout<<"Index of element 9 is: "<<binarySearch(odd,sizeOdd,9)<<endl;
}
