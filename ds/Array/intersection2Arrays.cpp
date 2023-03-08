//you-are-given-two-arrays-a-and-b-of-size-n-and-m-respectively-both-these-arrays-are-sorted-in-
//non-decreasing-order-you-have-to-find-the-intersection-of-these-two-arrays

// first TLE approach
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{	
	vector<int> ans;
	for(int i=0; i<n;i++){
		for(int j=0; j<m; j++){
			if(arr1[i] < arr2[j])
				break;		/* if arr2 elem is bigger then no need to check other as sorted array is given */
			if(arr1[i] == arr2[j]){
				ans.push_back(arr1[i]);
				arr2[j] = -3243;
				break;		/* if found, no need to check for others as common element can be only one */
			}
		}
	}
	return ans;
}

// two pointer approach
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector<int> ans;
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;	
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;		/* if arr2 elem is bigger then no need to check other as sorted array is given, so arr1's index is increamented*/
        }
        else{
            j++;		/* if arr1 elem is bigger then need to check next element as sorted array is given, so arr2's index is increamented*/
        }
    }
    return ans;
}
		
