#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    #endif

    int n;
    cin>>n;

    for(int i=1; i<=4*n-1; i++){
        if(i%4==3){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
    for(int j=1; j<=4*n; j++){
        if(j%2==0){
            cout<<"*";
        }
        else{
            cout<<" ";
        }

    }
    cout<<endl;
    for(int k=1; k<=4*n+1; k++){
        if(k%4==1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }

}
