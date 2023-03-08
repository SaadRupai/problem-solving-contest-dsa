/*You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes). */


#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin>>str;
	int count=0;
	for(int i=0; i<=str.size()/2; i++){
		if(str[i] == str[str.size()-i-1]){
			count++;
			continue;
		}
		else{
			cout<<"NO";
			break;
		}
	}
	if(count >= str.size()/2){
		cout<<"YES";
	}
}
