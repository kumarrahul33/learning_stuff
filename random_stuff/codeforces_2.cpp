#include<bits/stdc++.h>
using namespace std;

long long max1(long long a, long long b, long long c){
    if(a>b){
        if(a>c)
            return a;
        else
            return c;
    }
    else{
        if(b>c){
            return b;
        }
        else
            return c;
    }
}

void fun(long long a, long long b , long long c){
    cout<<max1(b-a+1,c-a+1,0)<<" ";
    cout<<max1(a-b+1,c-b+1,0)<<" ";
    cout<<max1(b-c+1,a-c+1,0);
    cout<<endl;

}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    long long a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        fun(a,b,c);
    }
}