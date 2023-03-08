/*you-have-been-given-a-sorted-array-list-arr-consisting-of-n-elements-you-are-also-given-an-integer-k. now-your-task-is-to-find-the-number-of-occurrence-of-k-in-arr*/

#include<bits/stdc++.h>
using namespace std;

// leftmost
int firstOccur(int arr[], int size, int key){
	int start = 0;
	int end = size-1;
	int mid = start+(end-start)/2;	// to avoid int overflow
	int ans = -1;
	
	while(start <= end){
		if(arr[mid] == key){
			ans = mid;
			end = mid-1;
		}
		else if(arr[mid] < key){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		mid = start+(end-start)/2;
	}
	return ans;
}

// rightmost
int lastOccur(int arr[], int size, int key){
	int start = 0;
	int end = size-1;
	int mid = start+(end-start)/2;	// to avoid int overflow
	int ans = -1;
	
	while(start <= end){
		if(arr[mid] == key){
			ans = mid;
			start = mid+1;
		}
		else if(arr[mid] < key){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		mid = start+(end-start)/2;
	}
	return ans;
}


// to merge first and last
/*pair<int,int> firstLastPos(int arr[], int size, int key){
	
	pair<int,int> p;
	
	p.first = firstOccur(arr,size,key);
	p.second = lastOccur(arr,size,key);
	
	return p; 
}*/

int main(){
	int even[14]={1,2,3,3,3,3,3,3,3,3,3,3,3,5};
	int odd[5]={1,3,3,3,2};
	
	// for even arr
	int x = firstOccur(even,14,3);
	int y = lastOccur(even,14,3);
	int numOfOccurEven = (y-x)+1;
	cout<<"NUm of Occurances for 3 in Even Arr is : "<<numOfOccurEven<<endl;
	cout<<endl;
	
	// for odd arr
	int w = firstOccur(odd,5,3);
	int z = lastOccur(odd,5,3);
	int numOfOccurOdd = (z-w)+1;
	cout<<"NUm of Occurances for 3 in Odd Arr is : "<<numOfOccurOdd<<endl;
}
