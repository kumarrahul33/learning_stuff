#include<bits/stdc++.h>
using namespace std;

int getbin(int n){
    int bin=0;
    int i=0;
    while(n!=0){
        bin+=(pow(10,i))*(n%2);
        n=n/2;
        //cout<<bin<<" "<<n<<endl;
        i++;
    }
    return bin;
}

int main(){
    #ifndef ONLINE_JUDGE

    freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    #endif

    int a;
    int b;
    cin >> a;
    cin >> b;

    cout<< getbin(a) << endl << getbin(b) << endl;
    
    cout << (a & b);
}