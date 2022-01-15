#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool comp(string i1,string i2){
    return  i1.size()<i2.size();
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif

    vector<string> v1(5);
    for(int i=0; i<5; i++){
        cin>>v1[i];
    }
    for (auto i:v1){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v1.begin(),v1.end(),comp);

    for (auto i:v1){
        cout<<i<<" ";
    }

    

}
