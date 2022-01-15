#include<bits/stdc++.h>
using namespace std;
bool same(int a1,int a2, int b1, int b2){
    if(((a1+a2)%2==0&&(b1+b2)%2==0)||((a1+a2)%2!=0&&(b1+b2)%2!=0))
        return true;
    
    
    
    else return false;
}

void fun(int a1,int a2, int b1, int b2){
    if(a1==b1 && a2==b2){
        cout<<0<<endl;
        return;
    }
    else if(same(a1,a2,b1,b2)){
        cout<<2<<endl;
        //ut<<same(a1,a2,b1,b2)<<endl;
        return;
    }
    else{
        cout<<1<<endl;
        return;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin>>n;

    int a1,a2,b1,b2;
    for(int i=0; i<n; i++){
        cin>>a1>>a2>>b1>>b2;
        fun(a1,a2,b1,b2);

    }


}