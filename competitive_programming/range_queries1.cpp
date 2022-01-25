#include<bits/stdc++.h>
using namespace std;
int partition(int i,int j){

    int k=0;
    int temp=1;
    while((j-i+1)/temp > 1){
        temp=temp*2;
        k++;
    }
    return k-1;
}
int minVal(int n,int a,int b){
    
}
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
    cout<<pow(2,5);
    cout<<minVal(n,1,5);

}
