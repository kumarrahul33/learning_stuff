#include<bits/stdc++.h>
using namespace std;

bool check(int arr[], int n){
    if(n==2){
        return (arr[0]<=arr[1])? true: false ;
    }
    else{
        return (arr[n-2]<=arr[n-1])? check(arr,n-1):false;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin>>n;

    int arr1[n];
    for(int i=0; i<n; i++)
        cin>>arr1[i];    

    if(check(arr1,n)==1)
        cout<<"true";
    else
        cout<<"false";
  
}