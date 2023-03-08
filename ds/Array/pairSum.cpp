/*you-are-given-an-integer-array-arr-of-size-n-and-an-integer-s-your-task-is-to-return-the-list-of-all-pairs-of-elements-such-that-each-sum-of-elements-of-each-pair-equals-s*/



vector<vector<int>> pairSum(vector<int> &arr, int s){
   
   // Write your code here.
    vector<vector<int>> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
