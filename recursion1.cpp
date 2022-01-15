#include<bits/stdc++.h>
using namespace std;

string pushx(string s){
    string ans=s.substr(1);
    char ch=s[0];

    if(s.length()==1)
        return s;

    else if(ch=='x')
        return pushx(ans)+ch;

    return ch+pushx(ans);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    getline(cin,s);

    cout<<pushx(s);




}