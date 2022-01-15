#include<bits/stdc++.h>
using namespace std;


int getbin(int n){
    int bin=0;
    int i=0;
    while(n!=0){
        bin+=(pow(10,i))*(n%2);
        n=n/2;
        //cout<<bin<<" "<<n<<endl;
        i++;
    }
    return bin;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //cout<<getbin(5);
    
    for(int i=1; i<101; i++){
        cout<<getbin(i)<<endl;
    }

    

    

    
}
