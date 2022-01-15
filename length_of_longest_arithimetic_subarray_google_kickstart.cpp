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

    
    int count=1;
    int finalans=1;
    for(int j=0; j<n; j++){
        if((l[j+1]-l[j]==(l[j+2]-l[j+1]))){
            count+=1;
        }
        if(count>=finalans){
            finalans=count;
        }
        else if(finalans==n){
            break;
        }
        else if(finalans>=(n-j)){
            break;
        }

    }
    cout<<finalans;
}