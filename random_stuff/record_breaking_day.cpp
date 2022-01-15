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

    int max1=l[0];
    int count=0;
    for(int j=0; j<n; j++){
       // cout<<max1<<" "<<endl;
        if((l[j]>max1 && l[j+1]<l[j]) || (l[j]>max1 && j==n-1)){
            //cout<<max1<<" "<<endl;
            max1=l[j];
            count+=1;
            continue;
        }

       
    }
    cout<<count;

}