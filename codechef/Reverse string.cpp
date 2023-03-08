#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	string str1;
  	for(int i =str.size()-1; i>=0; i--){
      str1.push_back(str[i]);
    }
    cout<<str1<<endl;
}
