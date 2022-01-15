#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int key;
    cin >> key;
    
    int n;
    cin >> n;

    int l1[n];

    for(int i=0; i<=n-1; i++){
        cin >> l1[i];
    }

    int s=0;
    int e=n-1;
    while(e-s>=0){
        if(l1[(s+e)/2]>key)
            e=(s+e)/2 -1;
        
        else if(l1[(s+e)/2]<key)
            s=(s+e)/2+1;
        else if(l1[(s+e)/2]=key){
            cout<<"found";
            break;
        }
    }
    if(e-s<0)
        cout<<"not found";
}