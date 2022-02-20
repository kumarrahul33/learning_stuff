#include<bits/stdc++.h>
using namespace std;
int main(){
    // #ifndef ONLINE_JUDGE

    // freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    // freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    // #endif
    
    int n;
    cin>>n;

    int arr1[n];

    for (int i = 0; i < n; i++) cin>>arr1[i];

    int first[n]; int last[n];

    for (int i = 0; i < n; i++)
    { 
        first[i]=INT_MAX;
        last[i]=-1;
    }
    

    for (int i = 0; i < n; i++) first[arr1[i]]=min(i,first[arr1[i]]);
    for (int i = 0; i < n; i++) last[arr1[i]]=max(max(last[arr1[i]],first[arr1[i]]),i);

    int maxDist=0;
    for(int i = 0; i < n; i++)
    {   
        maxDist=max(maxDist,last[arr1[i]]-first[arr1[i]]);
    }

    cout<<maxDist;


}