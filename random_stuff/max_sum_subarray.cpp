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
    int sum[n+1];
    sum[0]=0;

    for(int i=0; i<=n-1; i++){
        cin>>l1[i];
    }
    int sum1=0;
    for(int i=0; i<=n; i++){
        sum1+=l1[i];
        sum[i+1]=sum1;
    }
    sum1=0;

    int max1=INT_MIN;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            sum1=sum[i]-sum[j];
            max1=max(sum1,max1);

        }
    }
    cout<<max1;



}