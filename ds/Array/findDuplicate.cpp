//you-are-given-an-array-arr-of-size-n-containing-each-number-between-1-and-n-1-at-least-once-
//there-is-a-single-integer-value-that-is-present-in-the-array-twice-your-task-is-to-find-the-
//duplicate-integer-value-present-in-the-array

int findDuplicate(vector<int> &arr) 
{
    // xor approach
	int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    for(int i=1; i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
}
