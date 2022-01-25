/*As the first example, consider a problem where we are given an array of n positive
integers and a target sum x, and we want to find a subarray whose sum is x or
report that there is no such subarray.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/rahul/Code/C++/input.txt", "r", stdin);
    freopen("/home/rahul/Code/C++/output.txt", "w", stdout);
    #endif

    int n;
    int a;
    cin>>n;
    cin>>a;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 

    int p1=0; int p2=0; int sum_sub=arr[0];
    while(sum_sub!=a){
        if(sum_sub<a) {
            p2++;
            sum_sub+=arr[p2];
        }
        if(sum_sub>a){
            sum_sub-=arr[p1];
            p1++;
        }
        else if(p1>=n || p2>=n) break;
        cout<<p1<<" "<<p2<<"\n";
    }
    
    cout<<p1<<" "<<p2;
}
