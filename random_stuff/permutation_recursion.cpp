#include<bits/stdc++.h>
using namespace std;

void permute(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<s.size(); i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permute(ros,ans+ch);    
        }
    
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin>>s;

    permute(s,"");

    


}