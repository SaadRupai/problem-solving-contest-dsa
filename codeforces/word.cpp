/*Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count,countU, countL;
    count=0;
    countU=0;
    countL=0;
    cin>>s;
    for(int i=0; i<(int)s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            countU++;
        }
        else{
            countL++;
        }
    }
    if(countL >= countU){
        for(int i=0; i<(int)s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i]+32;
            }
        }
    }else{
        for(int i=0; i<(int)s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] = s[i]-32;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}