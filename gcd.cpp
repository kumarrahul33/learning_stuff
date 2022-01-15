#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n1,n2;
    cin>>n1>>n2;
    int big=max(n1,n2);
    int small=min(n1,n2);

    while(big%small!=0){
        int temp=small;
        small=big%small;
        big=temp;
        
    }
    cout<<small;
}
