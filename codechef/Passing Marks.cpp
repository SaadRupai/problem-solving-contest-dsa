/*In a class of NN students, a class test was held. The ithith student scored AiAi​ marks. It is also known that the scores of all students were distinct.

A student passes the test if their score is strictly greater than the passing mark. Given that exactly XX students pass in the test, find the maximum value of the passing mark of the test.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        int arr[100];
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int j,min,ans;
        j=n-1;
        min = 100000;
        ans=0;
        while(x--){
            if(arr[j] < min){
                min = arr[j];
                j--;
            }
        }
        ans = min-1;
        cout<<ans<<endl;

    }
}