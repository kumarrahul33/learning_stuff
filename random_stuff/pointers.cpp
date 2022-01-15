#include<bits/stdc++.h>
using namespace std;

void incr(int *a, int *b){
    *a+=1;
    *b+=1;
    //cout<<*a<<" "<<*b<<endl;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int key;
    cin >> key;
    
    int n;
    cin >> n;
    
    
    incr(&key,&n);
    cout<<key<<" "<<n;
    

}
