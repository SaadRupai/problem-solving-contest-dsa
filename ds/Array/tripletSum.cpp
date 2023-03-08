/*you-are-given-an-array-list-arr-consisting-of-n-integers-your-task-is-to-find-all-the-distinct-triplets-present-in-the-array-which-adds-up-to-a-given-number-k*/

/*
        
    Time Complexity: O(N^3)
    Space Complexity: O(1)

    Where N is the number of elements in the array.

 */

#include<set>

vector<vector<int>> findTriplets(vector<int>arr, int n, int K)  {

    // Set to keep the track of visited triplets.
    set<vector<int>>visited;
    vector<vector<int>>ans;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                // If we find a valid triplet.
                if (arr[i] + arr[j] + arr[k] == K) {
                    vector<int> triplet;
                    triplet.push_back(arr[i]);
                    triplet.push_back(arr[j]);
                    triplet.push_back(arr[k]);
                    // Sorting the triplet track distinct triplets.
                    sort(triplet.begin(), triplet.end());
                    if (visited.find(triplet) == visited.end()) {
                        ans.push_back(triplet);
                        visited.insert(triplet);
                    }
                }
            }
        }
    }

    return ans;

}


/* Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X. */

// with O(n^3)
#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	
	bool triplets(int a[], int n, int x){
		bool ans=0;
		for(int i=0; i<n; i++){
		    for(int j=i+1; j<n ; j++){
		        for(int k=j+1; k<n; k++){
		            if(a[i]+a[j]+a[k] == x){
		                ans=1;
		            }
		        }
		    }
		}
		return ans;
	}
};

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,x;
    	cin>>n>>x;
    	int a[n];
    	for(int i=0; i<n;i++){
    		cin>>a[i];
    	}
    	Solution obj; 
    	cout<<obj.triplets(a,n,x)<<endl;
	}
}

// } Driver Code Ends

//with O(n^2), space O(1)
//two pointer approach
bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Her
        int ans=0;
        sort(A,A+n);
        for(int i=0; i<n-2; ++i){
            int l=i+1;
            int r=n-1;
            while(l<r){
                if(A[i]+A[l]+A[r] == X){
                    ans=1;
                    break;
                }
                else if(A[i]+A[l]+A[r] > X){
                    r--;	// if sum is bigger then elements are in left part
                }
                else{
                    l++;	// if sum is smaller then elements are in right part
                }
            }
        }
        return ans;
    }


