/*Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.*/


// bruteforce approach is by counting sort(freq counting-> then assigning by loop)


// 3 pointer approach O(N), space O(1)
void sort012(int a[], int n)
    {
        // code here 
        
        // [0 to low-1] = 0; [mid+1 to high] = 2; so, [low to mid] = 1 
        //checking each element by iterating with mid
        
        int low=0;
        int mid=0;
        int high=n-1;
        for(int i=0; i<n; i++){
            if(a[mid] == 0){
                swap(a[low], a[mid]);	
                low++;
                mid++;
            }
            else if(a[mid] == 2){
                swap(a[high], a[mid]);
                high--;
            }
            else{
                mid++;
            }
        }
    }
