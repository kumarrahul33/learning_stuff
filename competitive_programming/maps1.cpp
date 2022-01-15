#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif

    map<string, int> m1;

    m1["rahul"]=0;
    m1["brarav"]=4646;
    m1["brohit"]=137;

    for(auto x: m1){
        cout<<x.first<<" "<<x.second<<"\n";
    }
    


}