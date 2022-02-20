#include<bits/stdc++.h>
using namespace std;
int main(){
    // #ifndef ONLINE_JUDGE

    // freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    // freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    // #endif
    
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];
    int ridgeVal=0;
    bool extraPoint=false;
    for(int i=1; i<n-1; i++)
    {
        if(arr[i-1] < arr[i] && arr[i+1] < arr[i]) 
        {
            if(arr[i-1]==arr[i+1]) extraPoint=true;
            ridgeVal++;
        }
        else if(arr[i-1] > arr[i] && arr[i+1] > arr[i])
        { 
            if(arr[i-1]==arr[i+1]) extraPoint=true;
            ridgeVal++;
        }
    }

    // if(extraPoint)
    // {
    //     cout<<max(0,ridgeVal-3);
    //     return 0;
    // }
    cout<<max(0,ridgeVal-3);
    return 0;
}