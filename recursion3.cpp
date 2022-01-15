#include<bits/stdc++.h>
using namespace std;


void subseq(string s){
     if(s.size()==0){
        return;
    }

    string restf=s.substr(1);
    string restb=s.substr(0,s.size()-1);
    cout<<s<<endl;

    subseq(restf);
    subseq(restb);
    //cout<<st+rest<<" "<<rest<<" "<<subseq(rest)<<" ";

    
   
    
    
    

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