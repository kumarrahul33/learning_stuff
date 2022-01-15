#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/rahul/Code/C++/input.txt", "r", stdin);
    freopen("/home/rahul/Code/C++/output.txt", "w", stdout);
    #endif

    set<int> set1;
    set1.insert(5);
    set1.insert(8);
    set1.insert(45);
    set1.insert(55);
    set1.insert(446);

    //like maths set no repeating elements

    set1.insert(5);
    set1.insert(5);
    set1.insert(5);

    cout<<set1.count(5);//always return 0 or 1
    cout<<endl;
    cout<<set1.size()<<endl;

    //to print the elements of a set
    for(auto x : set1){
        cout<<x<<" ";
    }



}