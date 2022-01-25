#include<bits/stdc++.h>
using namespace std;
int main(){
    //minimum of element in any subarray
    #ifndef ONLINE_JUDGE
    freopen("/home/rahul/Code/C++/input.txt", "r", stdin);
    freopen("/home/rahul/Code/C++/output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int arr_sum[n];
    arr_sum[0]=arr[0];
    
    for(int i=1; i<n; i++) arr_sum[i]=arr_sum[i-1]+arr[i];

    for(int i=1; i<n; i++){
        if(arr_sum[n-1]-arr_sum[i]==((n-i)*(n-i-1))/2){ cout<<"NO"; break;}
        else if(i==n-1) cout<<"YES";

}
    


}