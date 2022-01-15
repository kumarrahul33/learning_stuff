#include<bits/stdc++.h>
using namespace std;

void abb(string s){
    int n=s.length();
    string s1= to_string(n-2);
    cout<<s[0]+s1+s[n-1]<<endl;
    return;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

    string s;
    for(int i=0; i<n; i++ ){
        cin>>s;
        if(s.length()>10){
            abb(s);
        }
        else
            cout<<s<<endl;
    }
}