#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //functions related to strings


    string str;
    getline(cin,str);
    //cout<<str;
/*
    string str1="rah";
    string str2="rah";
    //str1.append(str2);
    //cout<<str1+str2;
    //cout<<str1.compare(str2);
    str2.clear();
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
    str.insert(10,"everyone ");
    cout<<str1.empty()<<endl;
    cout<<str2.empty()<<endl;
    //str.erase(5,8);
    cout<<str<<endl;
    cout<<str.find("there")<<endl;

    cout<<str.substr(8,15);

    //string to integer
    string s1= "54";
    int x= stoi(s1);
    cout<<x+6<<endl;
    
    //integer to string
    string s2= to_string(x);
    cout<<s2+s1;
*/

    //sorting
    //sort(str.begin(),str.end());
    
    cout<<str.erase(1,1);
   /* for(int i=0; i<str.size(); i++){
        cout<<i<<" "<<str[i]<<endl;
    }*/

}