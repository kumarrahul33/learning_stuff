//some basic bitwise functions
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

int getbit(int n, int pos){
    return ((n&(1<<pos))!=0);
}

int clearbit(int n, int pos){
    int temp=~(1<<pos);
    return (n&temp);
}

int setbit(int n, int pos, int value){
    int temp=~(1<<pos);
    return (n&temp)|(value<<pos);
    }


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    int pos;
    cin>>n;
    cin>>pos;
    
    //cout<<getbin(n)<<endl;
    //cout<<getbit(n,pos);
    //cout<<getbin(clearbit(n,pos));
    //cout<<getbin(setbit(n,pos,1));

    cout<<getbit(6,0);
   } 

