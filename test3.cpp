#include<bits/stdc++.h>
using namespace std;

int sumofdigits(int n){
    int temp=0;
    int m=n;
    while(m>0){
        temp+=m%10;
        m=m/10;
    }
    if(n<10){
        return n;
    }

    else{
        return sumofdigits(temp);

    }

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

    cout<<sumofdigits(n);
    /*int temp=0;
    while(n>0){
        temp+=n%10;
        n=n/10;
    }
    cout<<endl<<temp;*/

}