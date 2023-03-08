/*You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.*/


#include<bits/stdc++.h>
using namespace std;

int main(){
		string command;
		cin>>command;
		string str;
		str.push_back('"');
		int i=1;
        for(int i = 1; i < command.size()-1; ++i){ 
            if(command[i] == 'G'){
                str.push_back('G');
            }
            else if(command[i] == '('){
                if(command[i+1] == ')'){
                    str.push_back('o');
                }
                else{
                    str.push_back('a');
                    str.push_back('l');
                }
            }
        }
        str.push_back('"');
        cout<<str;
}
