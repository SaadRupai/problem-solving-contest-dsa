/*You are given an array AA of size NN. In one operation, you can do the following:

    Select indices ii and jj (i≠j)(i=j) and set Ai=AjAi​=Aj​.

Find the minimum number of operations required to make all elements of the array equal.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of multiple lines of input.
        The first line of each test case contains an integer NN — the size of the array.
        The next line contains NN space-separated integers, denoting the array AA.

Output Format

For each test case, output on a new line, the minimum number of operations required to make all elements of the array equal.
Constraints

    1≤T≤10001≤T≤1000
    1≤N≤2⋅1051≤N≤2⋅105
    1≤Ai≤N1≤Ai​≤N
    The sum of NN over all test cases won't exceed 2*10^5 (1s)

*/


#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int max=-1;
        int count2=0;
        int temp = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        sort(arr,arr+n);
        for(int i=0; i<n; i++){
            int count = 1;
            
            // nlogn
            while (i < n - 1 && arr[i] == arr[i + 1]){
                i++;
                count++;
            }
            

            if(count>max){
                max=count;
                temp=arr[i];
            }
        }     
        for(int i=0; i<n; i++){
            if(arr[i] == temp){
                continue;
            }
            else {
                arr[i]=temp;
                count2++;
            }
        }
        cout<<count2<<endl;
    }
    return 0;
}