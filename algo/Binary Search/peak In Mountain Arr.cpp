/*An array arr a mountain if the following properties hold:

    arr.length >= 3
    There exists some i with 0 < i < arr.length - 1 such that:
        arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
        arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.*/


#include<bits/stdc++.h>
using namespace std;

//linear search approach
class Solution {
    public int peakIndexInMountainArray(int[] A) {
        int i = 0;
        while (A[i] < A[i+1]) i++;	//The mountain increases until it doesn't. The point at which it stops increasing is the peak.
        return i;
    }
}

// binary search approach
int peakValue(int arr[], int size){
	int start = 0;
	int end = size-1;
	int mid = start+(end-size)/2;
	
	while(start < end){
		if(arr[mid] < arr[mid+1]){
			start = mid+1;
		}
		else{
			end = mid;
					// if(arr[mid] > arr[mid+1]) or arr[mid] == i
		}
		mid = start+(end-start)/2;
	}
	return start;
}

int main(){
	int arr[4] = {3,4,5,1};
	
	cout<<"Peak Value of Mountain Array is in index : "<<peakValue(arr,4)<<endl;

}
