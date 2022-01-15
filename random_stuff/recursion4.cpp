#include<bits/stdc++.h>
using namespace std;


void subseq(string s, string ans=""){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }

    char st=s[0];
    string rest=s.substr(1);

    subseq(rest, ans);
    subseq(rest, ans+st);


}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    getline(cin,s);

    subseq(s);

}