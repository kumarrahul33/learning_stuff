#include<bits/stdc++.h>
using namespace std;

void substring(string s,int end, int st=0){
    if(s.size()==1){
        cout<<s;
        return;
    }
        
    else if(end-st>=1){
        cout<<s.substr(st,end-st+1)<<endl;
        substring(s,end-1);
        }
    else if(end-st==0){
        cout<<s.substr(st,1)<<endl;
        substring(s.substr(1),s.size()-2,0);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
   
    
    string s;
    getline(cin,s);
    n=s.size();

    substring(s,n-1);
    

}