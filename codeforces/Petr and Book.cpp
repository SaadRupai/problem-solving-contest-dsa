/*One Sunday Petr went to a bookshop and bought a new book on sports programming. The book had exactly n pages.

Petr decided to start reading it starting from the next day, that is, from Monday. Petr's got a very tight schedule and for each day of the week he knows how many pages he will be able to read on that day. Some days are so busy that Petr will have no time to read whatsoever. However, we know that he will be able to read at least one page a week.

Assuming that Petr will not skip days and will read as much as he can every day, determine on which day of the week he will read the last page of the book.
Input

The first input line contains the single integer n (1 ≤ n ≤ 1000) — the number of pages in the book.

The second line contains seven non-negative space-separated integers that do not exceed 1000 — those integers represent how many pages Petr can read on Monday, Tuesday, Wednesday, Thursday, Friday, Saturday and Sunday correspondingly. It is guaranteed that at least one of those numbers is larger than zero.
Output

Print a single number — the number of the day of the week, when Petr will finish reading the book. The days of the week are numbered starting with one in the natural order: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[6];
    for(int i=0; i<7; i++){
        cin>>arr[i];
    }
    
    int flag=0;
    while(n > 0){
        int i=0;
        if(n>=arr[i]){      //1
            n= n-arr[i];
            i++;
            if(n<=0){
                flag=1;
                break;
            }
        }
        else{
            flag=1;
            break;
        }
        if(n>=arr[i]){      //2
            n=n-arr[i];
            i++;
            if(n<=0){
                flag=2;
                break;
            }
        }
        else{
            flag=2;
            break;
        }
        if(n>=arr[i]){       //3
            n=n-arr[i];
            i++;
            if(n<=0){
                flag=3;
                break;
            }
        }
        else{
            flag=3;
            break;
        }
        if(n>=arr[i]){       //4
            n=n-arr[i];
            i++;
            if(n<=0){
                flag=4;
                break;
            }
        }
        else{
            flag=4;
            break;
        }
        if(n>=arr[i]){       //5
            n=n-arr[i];
            i++;
            if(n<=0){
                flag=5;
                break;
            }
        }
        else{
            flag=5;
            break;
        }
        if(n>=arr[i]){       //6
            n=n-arr[i];
            i++;
            if(n<=0){
                flag=6;
                break;
            }
        }
        else{
            flag=6;
            break;
        }
        if(n>=arr[i]){       //7
            n=n-arr[i];
            i++;
            if(n<=0){
                flag=7;
                break;
            }
        }
        else{
            flag=7;
            break;
        }
    }
    cout<<flag<<endl;
    return 0;
}