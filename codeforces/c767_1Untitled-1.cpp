#include<bits/stdc++.h>
using namespace std;
int ram_max(int n,int curr_ram ){
    int arr_req[n];
    int arr_given[n];
    for(int i=0; i<n; i++) cin>>arr_req[i];
    for(int i=0; i<n; i++) cin>>arr_given[i];
    int ram=curr_ram;
while(true){
    for(int i=0; i<n; i++){
        if(ram>=arr_req[i]) ram+=arr_given[i];
        
    }
}

}
int main(){
    //minimum of element in any subarray
    #ifndef ONLINE_JUDGE
    freopen("/home/rahul/Code/C++/input.txt", "r", stdin);
    freopen("/home/rahul/Code/C++/output.txt", "w", stdout);
    #endif
    int no_of_cases;
    int curr_ram,n;
    cin>>no_of_cases;

}