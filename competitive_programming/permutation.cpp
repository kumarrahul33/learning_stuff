#include<bits/stdc++.h>
using namespace std;


void permutation(int &a, int &b, int &c, int n){
    switch(n){
        case 1:
            break;
        case 2: swap(b,c);
            break;
        case 3: swap(a,b);
            break;
        case 4: swap(a,b); swap(b,c);
            break;
        case 5: swap(b,c); swap(a,b);
            break;
        case 6: swap(a,b); swap(b,c); swap(a,b);
            break;
        default: break;
    }

    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/rahul/Code/C++/input.txt", "r", stdin);
    freopen("/home/rahul/Code/C++/output.txt", "w", stdout);
    #endif

    int a,b,c,n;
    cin>>a>>b>>c>>n;

    permutation(a,b,c,n);
    

}