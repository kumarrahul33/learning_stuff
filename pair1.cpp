#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif

    pair<int,string> p;
    p.first=52;
    p.second="hello_world";

    cout<<p.first<<endl<<p.second<<endl;
    pair<int,string> q=make_pair(53,"made by make_pair");
    cout<<q.first<<endl<<q.second;
    

    //you can also make a vector of pairs

}