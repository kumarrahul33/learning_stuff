#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/rahul/Code/C++/input.txt", "r", stdin);
    freopen("/home/rahul/Code/C++/output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int weights[n];
    for(int i=0; i<n; i++) cin>>weights[i];

    set<int> possible_combo;
    possible_combo.insert(0);
    vector<int> temp;
    for(int i=0; i<n; i++){
        temp.empty();
        for(auto x : possible_combo) temp.push_back(x+weights[i]);
        for(auto y: temp) possible_combo.insert(y);
    }

    for(auto x : possible_combo) cout<<x<<" ";
    

}