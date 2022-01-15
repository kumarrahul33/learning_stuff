#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);

    #endif
    
    // obtaining the list
    int n;
    cin >> n;

    

    int l1[n];
    int sum[n];
    sum[0]=0;

    for(int i=0; i<=n-1; i++){
        cin>>l1[i];
    }
    
    
    
    //kadane's algorithm
    int currsum=0;
    int maxsum=0;
    for(int i=0; i<n; i++){
        currsum+=l1[i];
        if(currsum<0)
            currsum=0;
        
        maxsum=max(maxsum,currsum);
        //cout<<currsum<<" ";
    }
    cout<<maxsum;
    
    

    

}