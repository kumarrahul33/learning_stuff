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
    bool check[n+1]={0};
    for(int i=0; i<=n-1; i++){
        cin>>l1[i];
    }
    /*for(int i=0; i<=n-1; i++){
        cout<<check[i]<<" ";
    }*/
    for(int i=0; i<n; i++){
        if(l1[i]>0 && l1[i]<=n){
            check[l1[i]]={1};
        }
    }

    for(int i=1; i<=n; i++){
        if(i==n && check[n]==true)
            cout<<n+1;

        if(check[i]==false){
        cout<<i;
        break;
        }
        
    }

    
}