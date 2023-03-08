/*
On March 14, the day of the number π

is celebrated all over the world. This is a very important mathematical constant equal to the ratio of the circumference of a circle to its diameter.

Polycarp was told at school that the number π
is irrational, therefore it has an infinite number of digits in decimal notation. He wanted to prepare for the Day of the number π

by memorizing this number as accurately as possible.

Polycarp wrote out all the digits that he managed to remember. For example, if Polycarp remembered π
as 3.1415

, he wrote out 31415.

Polycarp was in a hurry and could have made a mistake, so you decided to check how many first digits of the number π

Polycarp actually remembers correctly.
Input

The first line of the input data contains the single integer t
(1≤t≤103

) — the number of test cases in the test.

Each test case is described by a single string of digits n

, which was written out by Polycarp.

The string n
contains up to 30

digits.
Output

Output t
integers, each of which is the answer to the corresponding test case, that is how many first digits of the number π Polycarp remembers correctly

*/

#include<bits/stdc++.h>
using namespace std;

int* GetBigInteger(string str)
{
    int x = str.size(), a = 0;

    int* arr = new int[str.size()];

    while (a != x) {
        arr[a] = str[a] - '0';
        a++;
    }
 
    return arr;
}
 
// Driver Code
int main()
{
	
    int count ;
    int t;
    string str1;
    string str2 = "3141592653589793238462643383279";
    int a = 0;
    int* arr1 = new int[str2.size()];
    while(a != str2.size()){
    	arr1[a] = str2[a]-'0';
    	a++;
    }
    
    cin>>t;
    while(t--){
    	    count = 0;
    	    cin>>str1;
	 
	    int* arr = GetBigInteger(str1);
	 

	    for (int i = 0; i < str1.size(); i++) {
		if(arr[i] == arr1[i]){
			count++;
		}
		else{
			break;
		} 
	    }
	    cout<<count<<endl;
    }
    return 0;
}
