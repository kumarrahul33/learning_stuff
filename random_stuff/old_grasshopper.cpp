#include<bits/stdc++.h>
using namespace std;

bool getbit(int n1, int pos){
    return (n1&(1<<pos));
}

long long jumpeven(long long pos,long long n){

    long long terms=(n/4);
    long long final_sum=0;
    
    for(int i=0; i<(n-terms*4); i++){
        final_sum=final_sum+(pow(-1,getbit(6,i))*-1)*(terms*4+i+1);
    }
    return pos+final_sum;
}
long long jumpodd(long long pos,long long n){

    long long terms=(n/4);
    long long final_sum=0;
    
    for(int i=0; i<(n-terms*4); i++){
        final_sum=final_sum+(pow(-1,getbit(6,i)))*(terms*4+i+1);
    }
    return pos+final_sum;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

    long long pos,m;
    
    for(int i=1;i<=n;i++){
        cin>>pos>>m;
        if(pos%2==0)
            cout<<jumpeven(pos,m)<<endl;
        else
            cout<<jumpodd(pos,m)<<endl;
    }

    
        
    return 0;
    //cout<<jump(10,10);


}