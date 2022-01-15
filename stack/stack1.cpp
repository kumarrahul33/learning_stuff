#include<bits/stdc++.h>
using namespace std;
string getString(char x)
{
    // string class has a constructor
    // that allows us to specify size of
    // string as first parameter and character
    // to be filled in given size as second
    // parameter.
    string s(1, x);
 
    return s;  
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif
    string s;
    getline(cin,s);

    stack<string> st;
    string temp="";
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
           
            st.push(temp);
            temp="";
        }
        else temp.append(getString(s[i]));

    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
        cout<<" ";
    }

    


    
}