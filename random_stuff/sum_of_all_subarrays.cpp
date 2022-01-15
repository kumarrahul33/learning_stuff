#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //input
    int n;
    cin>>n;

    int l[n];

    for(int i=0; i<n; i++){
        cin>>l[i];
    }

    int sum=0;
    for(int j=0; j<n; j++){
        sum+= l[j]*((n-j)*(j+1));
    }
    cout<<sum;
}