#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int temp=1;
    for(int i=0; i<n; i++) temp*=i+1;
    return temp;
}
int tiles_m2(int b){
  
}
int countTiles(int l,int b){

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/rahul/Code/C++/input.txt", "r", stdin);
    freopen("/home/rahul/Code/C++/output.txt", "w", stdout);
    #endif

    int l,b;
    cin>>l>>b;
    if(l%2==0) {cout<<countTiles(b,l); return 0;}
    cout<<countTiles(l,b);
    return 0;


}