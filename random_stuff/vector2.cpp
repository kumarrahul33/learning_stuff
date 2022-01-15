#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif

    vector<int> v1;
    for(int i=1; i<=10; i++){
        v1.push_back(i*10);


//to demostrate the functioning of pop_back function
    }
     for(int i=0; i<v1.size(); i++){
         cout<<v1[i]<<" ";
     }

    v1.pop_back();
    v1.pop_back();
    cout<<endl;

     for(int i=0; i<v1.size(); i++){
         cout<<v1[i]<<" ";
     }
     cout<<endl;

//to initialise  a vector with size and all the value same

    vector<char> fun (10,'d');
    for(auto head:fun){
        cout<<head<<" ";
    }
    cout<<endl;

    vector<int> v2 (10,5);

//swap function for vectors

    swap(v1,v2);
    for(auto element:v1){
        cout<<element<<" ";

    }
    cout<<endl;

    for(auto head:v2){
        cout<<head<<" ";
    }
    cout<<endl;
//sorting in vectors very useful
    v2[3]=464;
    v2[5]=55214;
    v2[6]=695;
    sort(v2.begin(),v2.end());
    for(auto i:v2){
        cout<<i<<" ";
    }


}