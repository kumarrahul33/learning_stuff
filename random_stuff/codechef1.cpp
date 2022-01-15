#include<bits/stdc++.h>
#include<climits>
using namespace std;

void fun(int a, int b, int c){
    if(a+b<=c){
        cout<<"YES";
        cout<<endl;
        return;
    }
    else{
        cout<<"NO";
        cout<<endl;
        return;
    }
        

}

int main(){
   /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    int n;
    cin>>n;
    int a,b,c;

    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        fun(a,b,c);
    }
}
