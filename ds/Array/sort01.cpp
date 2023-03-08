/*Given an array of length N consisting of only 0s and 1s in random order. Modify the array to segregate 0s on left side and 1s on the right side of the array.*/


//two pointer approach
 void segregate0and1(int arr[], int n) {
        // code here
        int left = 0;
        int right = n-1;
        while(left<right){
            while(arr[left] == 0 && left<right){
                left++;
            }
            while(arr[right] == 1 && left<right){
                right--;
            }
            if(left<right){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
        }
    }
};
