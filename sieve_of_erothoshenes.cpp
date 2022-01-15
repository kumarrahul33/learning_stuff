#include<bits/stdc++.h>
using namespace std;

void primeSieve(int n){
    int prime[10000]={0};
    for(int i=2; i<n; i++){
        int var=0;
        if(prime[i]==0){
            var=i*i;
            while(var<n){
               
                prime[var]=1;
                var+=i;
            }
        }
    }

    /*for(int i=2; i<n; i++){
        cout<<prime[i]<<" ";
    }*/

    for(int i=2; i<n; i++){
        if(prime[i]==0)
            cout<<i<<endl;
    }
}



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    primeSieve(n);
}