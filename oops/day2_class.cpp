#include<bits/stdc++.h>
using namespace std;


class student{
//making these instance variable publicly available
    public:
    string name;
    string branch;
    int rollNo;

    //tbd
    //default cons. and constructor
    

//this function can be used to print the info about the object
    void printInfo(){
        cout<<name<<endl;
        cout<<branch<<endl;
        cout<<rollNo<<endl;

    }

};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    student iitb[n];

    for(int i=0; i<n; i++){
        cin>>iitb[i].name;
        cin>>iitb[i].branch;
        cin>>iitb[i].rollNo;
        

    }

    for(int i=0; i<n; i++){

        iitb[i].printInfo();
    }

    student john;

    return 0;

}