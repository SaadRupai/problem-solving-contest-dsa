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
