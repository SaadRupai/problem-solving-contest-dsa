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
        sort(arr, arr+n);

        for(int i=0; i<n; i++){
            int count = 1;
            for(int j=i+1; j<n; j++){
                if(arr[i] == arr[j]){
                count++;
            }
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