#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){return 1;}
    return n*fact(n-1);
}
int main(){
    //#ifndef ONLINE_JUDGE
    //freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    //freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    //#endif

    int n;
    cin>>n;
    cout<<fact(n);


    return 0;
}