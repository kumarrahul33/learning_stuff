#include<bits/stdc++.h>
using namespace std;

void reverse(string a){
    if(a.size()==0){
            return;
    }

    else{
        cout<<a[a.size()-1];
        return reverse(a.erase(a.size()-1,1));
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string a;
    getline(cin,a);

    cout<<a<<endl;
    reverse(a);
    cout<<endl<<a.find("pi");
}