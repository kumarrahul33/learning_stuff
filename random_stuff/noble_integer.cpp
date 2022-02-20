#include<bits/stdc++.h>
using namespace std;
int main(){
    /*#ifndef ONLINE_JUDGE

    freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    #endif*/

    int n;
    cin >> n;

    int l1[n];

    for(int i=0; i<=n-1; i++){
        cin>>l1[i];
    }
    
    for(int i=0; i<n; i++){
        int count=0;
        for(auto x:l1){
            if(x>l1[i]) count++;
        }
        if(count==l1[i]){
            cout<<1;
            return 0;
        }
    }

    cout<<0;
    return 0;

}